#include "HttpUploadClientCashSubmit.h"
#include "../util/CommonFun.h"
#include "../util/KPosLog.h"
#include "../util/HttpSignal.h"
#include "../data/constData.h"
#include <QScriptEngine>
#include <QDebug>

HttpUploadClientCashSubmit::HttpUploadClientCashSubmit(QString sToken,QString sCorpID,QString sSubmitAmount,QString sUUID,QString sOperateAt,
                                                       QString sLastSubmitAt,QString sUserCode,QString sLoginId,QString sSubmitCode)
{
    QString userParam = QString("&access_token=%1&hq_code=%2&submit_amount=%3&uuid=%4&operate_at=%5&last_submit_at=%6&user_code=%7&login_id=%8&submit_code=%9")
            .arg(sToken).arg(sCorpID).arg(sSubmitAmount).arg(sUUID).arg(sOperateAt).arg(sLastSubmitAt).arg(sUserCode).arg(sLoginId).arg(sSubmitCode);
    QString systemParam = CommonFun::generateSystemParams(c_sHttpUploadClientCashSubmit);
    QStringList paramList = systemParam.append(userParam).split("&");
    QString sMd5Sign = CommonFun::getHttpParamSign(paramList);
    QString allParam = systemParam.append(QString("&sign=%1").arg(sMd5Sign));
    QByteArray array;
    array.append(allParam);
    setReqParams(array);
}

void HttpUploadClientCashSubmit::processResponse(QString strResult)
{
    QScriptEngine engine;
    QScriptValue sc = engine.evaluate("value=" + strResult);
    int nCode = sc.property("code").toInt32();
    QString sMsg = sc.property("msg").toString();
    if (!sc.property("code").isValid())
    {
        KPosLog::instance()->writeErrorLog(QStringLiteral("HttpUploadClientCashSubmit 返回参数json格式错误"));
        nCode = e_connectServerError;
        sMsg = c_sServerJsonError;
    }
    if (nCode != e_success)
    {
        KPosLog::instance()->writeErrorLog(this->getTestUrl());
        KPosLog::instance()->writeErrorLog(strResult);
    }

    HttpSignal::instance()->sigOnUploadClientCashSubmit(nCode, sMsg);
    this->deleteLater();
}

void HttpUploadClientCashSubmit::processError()
{
    HttpSignal::instance()->sigOnUploadClientCashSubmit(e_connectServerError, c_sNetError);
    this->deleteLater();
}


/********************************************************************************
** Form generated from reading UI file 'PersonalWalletDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONALWALLETDLG_H
#define UI_PERSONALWALLETDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <TitleBarWidget.h>
#include <WndDigitalKeyboard.h>

QT_BEGIN_NAMESPACE

class Ui_PersonalWalletDlg
{
public:
    QGridLayout *gridLayout_3;
    TitleBarWidget *widget;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QWidget *widget_4;
    QWidget *widget_5;
    QLabel *storeCodeLabel;
    QLabel *storeCodeValueLabel;
    QLabel *storeNameLabel;
    QLabel *storeNameValueLabel;
    QLabel *cashierCodeLabel;
    QLabel *cashierCodeValueLabel;
    QLabel *cashierNameLabel;
    QLabel *cashierNameValueLabel;
    QLabel *posCodeLabel;
    QLabel *posCodeValueLabel;
    QLabel *posNameLabel;
    QLabel *posNameValueLabel;
    QLabel *loginTimeLabel;
    QLabel *loginTimeValueLabel;
    QLabel *frontPaymentTimeLabel;
    QLabel *frontPaymentTimeValueLabel;
    QFrame *line_2;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget_6;
    QLabel *reserveAmtAddLabel;
    QLabel *cashierWalletSurplusLabel;
    QLineEdit *reserveAmtAddEdit;
    QLineEdit *cashierWalletSurplusEdit;
    QPushButton *commitButton;
    QFrame *line;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QPushButton *hundredButton;
    WndDigitalKeyboard *widget_8;
    QPushButton *towHundredButton;
    QPushButton *threeHundredButton;
    QPushButton *fiveHundredButton;

    void setupUi(QDialog *PersonalWalletDlg)
    {
        if (PersonalWalletDlg->objectName().isEmpty())
            PersonalWalletDlg->setObjectName(QStringLiteral("PersonalWalletDlg"));
        PersonalWalletDlg->resize(1060, 631);
        gridLayout_3 = new QGridLayout(PersonalWalletDlg);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new TitleBarWidget(PersonalWalletDlg);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 60));
        widget->setMaximumSize(QSize(16777215, 60));

        gridLayout_3->addWidget(widget, 0, 0, 1, 3);

        widget_2 = new QWidget(PersonalWalletDlg);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(460, 0));
        widget_2->setMaximumSize(QSize(460, 16777215));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(20, 20, 20, 20);
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(420, 531));
        widget_4->setMaximumSize(QSize(420, 531));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(0, 0, 420, 195));
        widget_5->setStyleSheet(QStringLiteral("background-color: rgb(250, 250, 250);"));
        storeCodeLabel = new QLabel(widget_5);
        storeCodeLabel->setObjectName(QStringLiteral("storeCodeLabel"));
        storeCodeLabel->setGeometry(QRect(30, 19, 70, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        storeCodeLabel->setFont(font);
        storeCodeValueLabel = new QLabel(widget_5);
        storeCodeValueLabel->setObjectName(QStringLiteral("storeCodeValueLabel"));
        storeCodeValueLabel->setGeometry(QRect(110, 19, 80, 20));
        storeCodeValueLabel->setFont(font);
        storeNameLabel = new QLabel(widget_5);
        storeNameLabel->setObjectName(QStringLiteral("storeNameLabel"));
        storeNameLabel->setGeometry(QRect(200, 19, 80, 20));
        storeNameLabel->setFont(font);
        storeNameValueLabel = new QLabel(widget_5);
        storeNameValueLabel->setObjectName(QStringLiteral("storeNameValueLabel"));
        storeNameValueLabel->setGeometry(QRect(290, 19, 80, 20));
        storeNameValueLabel->setFont(font);
        cashierCodeLabel = new QLabel(widget_5);
        cashierCodeLabel->setObjectName(QStringLiteral("cashierCodeLabel"));
        cashierCodeLabel->setGeometry(QRect(30, 44, 70, 20));
        cashierCodeLabel->setFont(font);
        cashierCodeValueLabel = new QLabel(widget_5);
        cashierCodeValueLabel->setObjectName(QStringLiteral("cashierCodeValueLabel"));
        cashierCodeValueLabel->setGeometry(QRect(110, 44, 80, 20));
        cashierCodeValueLabel->setFont(font);
        cashierNameLabel = new QLabel(widget_5);
        cashierNameLabel->setObjectName(QStringLiteral("cashierNameLabel"));
        cashierNameLabel->setGeometry(QRect(200, 44, 80, 20));
        cashierNameLabel->setFont(font);
        cashierNameValueLabel = new QLabel(widget_5);
        cashierNameValueLabel->setObjectName(QStringLiteral("cashierNameValueLabel"));
        cashierNameValueLabel->setGeometry(QRect(290, 44, 80, 20));
        cashierNameValueLabel->setFont(font);
        posCodeLabel = new QLabel(widget_5);
        posCodeLabel->setObjectName(QStringLiteral("posCodeLabel"));
        posCodeLabel->setGeometry(QRect(30, 69, 70, 20));
        posCodeLabel->setFont(font);
        posCodeValueLabel = new QLabel(widget_5);
        posCodeValueLabel->setObjectName(QStringLiteral("posCodeValueLabel"));
        posCodeValueLabel->setGeometry(QRect(110, 69, 80, 20));
        posCodeValueLabel->setFont(font);
        posNameLabel = new QLabel(widget_5);
        posNameLabel->setObjectName(QStringLiteral("posNameLabel"));
        posNameLabel->setGeometry(QRect(200, 69, 80, 20));
        posNameLabel->setFont(font);
        posNameValueLabel = new QLabel(widget_5);
        posNameValueLabel->setObjectName(QStringLiteral("posNameValueLabel"));
        posNameValueLabel->setGeometry(QRect(290, 69, 80, 20));
        posNameValueLabel->setFont(font);
        loginTimeLabel = new QLabel(widget_5);
        loginTimeLabel->setObjectName(QStringLiteral("loginTimeLabel"));
        loginTimeLabel->setGeometry(QRect(30, 92, 54, 20));
        loginTimeLabel->setFont(font);
        loginTimeValueLabel = new QLabel(widget_5);
        loginTimeValueLabel->setObjectName(QStringLiteral("loginTimeValueLabel"));
        loginTimeValueLabel->setGeometry(QRect(110, 92, 80, 20));
        loginTimeValueLabel->setFont(font);
        frontPaymentTimeLabel = new QLabel(widget_5);
        frontPaymentTimeLabel->setObjectName(QStringLiteral("frontPaymentTimeLabel"));
        frontPaymentTimeLabel->setGeometry(QRect(200, 92, 80, 20));
        frontPaymentTimeLabel->setFont(font);
        frontPaymentTimeValueLabel = new QLabel(widget_5);
        frontPaymentTimeValueLabel->setObjectName(QStringLiteral("frontPaymentTimeValueLabel"));
        frontPaymentTimeValueLabel->setGeometry(QRect(290, 92, 80, 20));
        frontPaymentTimeValueLabel->setFont(font);
        line_2 = new QFrame(widget_5);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 125, 420, 2));
        line_2->setMinimumSize(QSize(0, 2));
        line_2->setMaximumSize(QSize(16777215, 2));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label = new QLabel(widget_5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(33, 140, 141, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label->setFont(font1);
        label_2 = new QLabel(widget_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 140, 131, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color: rgb(234, 136, 82);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(0, 189, 420, 321));
        widget_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        reserveAmtAddLabel = new QLabel(widget_6);
        reserveAmtAddLabel->setObjectName(QStringLiteral("reserveAmtAddLabel"));
        reserveAmtAddLabel->setGeometry(QRect(20, 35, 140, 40));
        reserveAmtAddLabel->setFont(font1);
        reserveAmtAddLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cashierWalletSurplusLabel = new QLabel(widget_6);
        cashierWalletSurplusLabel->setObjectName(QStringLiteral("cashierWalletSurplusLabel"));
        cashierWalletSurplusLabel->setGeometry(QRect(20, 93, 140, 40));
        cashierWalletSurplusLabel->setFont(font1);
        cashierWalletSurplusLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        reserveAmtAddEdit = new QLineEdit(widget_6);
        reserveAmtAddEdit->setObjectName(QStringLiteral("reserveAmtAddEdit"));
        reserveAmtAddEdit->setGeometry(QRect(170, 35, 230, 40));
        reserveAmtAddEdit->setFont(font1);
        reserveAmtAddEdit->setStyleSheet(QStringLiteral("padding-left:10px;"));
        cashierWalletSurplusEdit = new QLineEdit(widget_6);
        cashierWalletSurplusEdit->setObjectName(QStringLiteral("cashierWalletSurplusEdit"));
        cashierWalletSurplusEdit->setGeometry(QRect(170, 93, 230, 40));
        cashierWalletSurplusEdit->setFont(font1);
        cashierWalletSurplusEdit->setStyleSheet(QStringLiteral("padding-left:10px;"));
        commitButton = new QPushButton(widget_6);
        commitButton->setObjectName(QStringLiteral("commitButton"));
        commitButton->setGeometry(QRect(25, 240, 385, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        commitButton->setFont(font3);
        commitButton->setFocusPolicy(Qt::NoFocus);
        commitButton->setStyleSheet(QLatin1String("QPushButton#commitButton {\n"
"	color: rgb(255, 255, 255);\n"
"	border-image: url(:/shareImages/sure_normal.png);\n"
"}\n"
"\n"
"QPushButton#commitButton:pressed {\n"
"	border-image: url(:/shareImages/sure_press.png);\n"
"}"));

        gridLayout->addWidget(widget_4, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);

        line = new QFrame(PersonalWalletDlg);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(2, 0));
        line->setMaximumSize(QSize(2, 16777215));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 1, 1, 1, 1);

        widget_3 = new QWidget(PersonalWalletDlg);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setSpacing(10);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(20, 60, 30, 60);
        hundredButton = new QPushButton(widget_3);
        hundredButton->setObjectName(QStringLiteral("hundredButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hundredButton->sizePolicy().hasHeightForWidth());
        hundredButton->setSizePolicy(sizePolicy);
        hundredButton->setMinimumSize(QSize(100, 0));
        hundredButton->setMaximumSize(QSize(100, 16777215));
        hundredButton->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(hundredButton, 0, 0, 1, 1);

        widget_8 = new WndDigitalKeyboard(widget_3);
        widget_8->setObjectName(QStringLiteral("widget_8"));

        gridLayout_2->addWidget(widget_8, 0, 1, 4, 1);

        towHundredButton = new QPushButton(widget_3);
        towHundredButton->setObjectName(QStringLiteral("towHundredButton"));
        sizePolicy.setHeightForWidth(towHundredButton->sizePolicy().hasHeightForWidth());
        towHundredButton->setSizePolicy(sizePolicy);
        towHundredButton->setMinimumSize(QSize(100, 0));
        towHundredButton->setMaximumSize(QSize(100, 16777215));
        towHundredButton->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(towHundredButton, 1, 0, 1, 1);

        threeHundredButton = new QPushButton(widget_3);
        threeHundredButton->setObjectName(QStringLiteral("threeHundredButton"));
        sizePolicy.setHeightForWidth(threeHundredButton->sizePolicy().hasHeightForWidth());
        threeHundredButton->setSizePolicy(sizePolicy);
        threeHundredButton->setMinimumSize(QSize(100, 0));
        threeHundredButton->setMaximumSize(QSize(100, 16777215));
        threeHundredButton->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(threeHundredButton, 2, 0, 1, 1);

        fiveHundredButton = new QPushButton(widget_3);
        fiveHundredButton->setObjectName(QStringLiteral("fiveHundredButton"));
        sizePolicy.setHeightForWidth(fiveHundredButton->sizePolicy().hasHeightForWidth());
        fiveHundredButton->setSizePolicy(sizePolicy);
        fiveHundredButton->setMinimumSize(QSize(100, 0));
        fiveHundredButton->setMaximumSize(QSize(100, 16777215));
        fiveHundredButton->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(fiveHundredButton, 3, 0, 1, 1);


        gridLayout_3->addWidget(widget_3, 1, 2, 1, 1);


        retranslateUi(PersonalWalletDlg);

        QMetaObject::connectSlotsByName(PersonalWalletDlg);
    } // setupUi

    void retranslateUi(QDialog *PersonalWalletDlg)
    {
        PersonalWalletDlg->setWindowTitle(QApplication::translate("PersonalWalletDlg", "PersonalWalletDlg", Q_NULLPTR));
        storeCodeLabel->setText(QApplication::translate("PersonalWalletDlg", "\351\227\250\345\272\227\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        storeCodeValueLabel->setText(QApplication::translate("PersonalWalletDlg", "13685695642", Q_NULLPTR));
        storeNameLabel->setText(QApplication::translate("PersonalWalletDlg", "\351\227\250\345\272\227\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        storeNameValueLabel->setText(QApplication::translate("PersonalWalletDlg", "xxx\345\272\204\345\233\255\345\272\227\351\223\272", Q_NULLPTR));
        cashierCodeLabel->setText(QApplication::translate("PersonalWalletDlg", "\346\224\266\351\223\266\345\221\230\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        cashierCodeValueLabel->setText(QApplication::translate("PersonalWalletDlg", "13685695642", Q_NULLPTR));
        cashierNameLabel->setText(QApplication::translate("PersonalWalletDlg", "\346\224\266\351\223\266\345\221\230\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        cashierNameValueLabel->setText(QApplication::translate("PersonalWalletDlg", "\345\274\240\345\260\217\345\247\220", Q_NULLPTR));
        posCodeLabel->setText(QApplication::translate("PersonalWalletDlg", "POS\346\234\272\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        posCodeValueLabel->setText(QApplication::translate("PersonalWalletDlg", "0023", Q_NULLPTR));
        posNameLabel->setText(QApplication::translate("PersonalWalletDlg", "POS\346\234\272\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        posNameValueLabel->setText(QApplication::translate("PersonalWalletDlg", "\345\277\253POS", Q_NULLPTR));
        loginTimeLabel->setText(QApplication::translate("PersonalWalletDlg", "\344\270\212\346\234\272\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        loginTimeValueLabel->setText(QApplication::translate("PersonalWalletDlg", "2015.06.23", Q_NULLPTR));
        frontPaymentTimeLabel->setText(QApplication::translate("PersonalWalletDlg", "\344\270\212\346\254\241\344\272\244\346\254\276\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        frontPaymentTimeValueLabel->setText(QApplication::translate("PersonalWalletDlg", "2015.06.23", Q_NULLPTR));
        label->setText(QApplication::translate("PersonalWalletDlg", "\345\216\237\344\270\252\344\272\272\351\222\261\345\214\205\345\211\251\344\275\231\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("PersonalWalletDlg", "\357\277\245120.00", Q_NULLPTR));
        reserveAmtAddLabel->setText(QApplication::translate("PersonalWalletDlg", "\345\244\207\347\224\250\351\207\221\345\242\236\345\212\240\357\274\232", Q_NULLPTR));
        cashierWalletSurplusLabel->setText(QApplication::translate("PersonalWalletDlg", "\347\216\260\344\270\252\344\272\272\351\222\261\345\214\205\345\211\251\344\275\231\357\274\232", Q_NULLPTR));
        commitButton->setText(QApplication::translate("PersonalWalletDlg", "\346\217\220\344\272\244", Q_NULLPTR));
        hundredButton->setText(QApplication::translate("PersonalWalletDlg", "\357\277\245100", Q_NULLPTR));
        towHundredButton->setText(QApplication::translate("PersonalWalletDlg", "\357\277\245200", Q_NULLPTR));
        threeHundredButton->setText(QApplication::translate("PersonalWalletDlg", "\357\277\245300", Q_NULLPTR));
        fiveHundredButton->setText(QApplication::translate("PersonalWalletDlg", "\357\277\245500", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PersonalWalletDlg: public Ui_PersonalWalletDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALWALLETDLG_H
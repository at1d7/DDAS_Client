/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *Logo;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *rememberCb;
    QPushButton *forgetBtn;
    QSpacerItem *verticalSpacer;
    QLineEdit *password;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *loginBtn;
    QPushButton *cancelBtn;
    QLineEdit *username;
    QWidget *widget_5;
    QGridLayout *gridLayout_4;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *hideBtn;
    QPushButton *closeBtn;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(864, 527);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        Login->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        gridLayout_2 = new QGridLayout(Login);
        gridLayout_2->setObjectName("gridLayout_2");
        widget = new QWidget(Login);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        Logo = new QLabel(widget);
        Logo->setObjectName("Logo");
        Logo->setSizeIncrement(QSize(0, 0));
        Logo->setMouseTracking(true);
        Logo->setAutoFillBackground(false);
        Logo->setStyleSheet(QString::fromUtf8(""));
        Logo->setFrameShape(QFrame::NoFrame);
        Logo->setAlignment(Qt::AlignCenter);
        Logo->setIndent(-1);

        gridLayout->addWidget(Logo, 1, 0, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        rememberCb = new QCheckBox(widget_2);
        rememberCb->setObjectName("rememberCb");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setBold(false);
        rememberCb->setFont(font);

        horizontalLayout->addWidget(rememberCb);

        forgetBtn = new QPushButton(widget_2);
        forgetBtn->setObjectName("forgetBtn");

        horizontalLayout->addWidget(forgetBtn);


        gridLayout->addWidget(widget_2, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        password = new QLineEdit(widget);
        password->setObjectName("password");
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        password->setFont(font1);
        password->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(password, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 0, 1, 1);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName("widget_7");
        horizontalLayout_4 = new QHBoxLayout(widget_7);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        loginBtn = new QPushButton(widget_7);
        loginBtn->setObjectName("loginBtn");

        horizontalLayout_4->addWidget(loginBtn);

        cancelBtn = new QPushButton(widget_7);
        cancelBtn->setObjectName("cancelBtn");

        horizontalLayout_4->addWidget(cancelBtn);


        gridLayout->addWidget(widget_7, 5, 0, 1, 1);

        username = new QLineEdit(widget);
        username->setObjectName("username");
        username->setFont(font1);
        username->setEchoMode(QLineEdit::Normal);
        username->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(username, 3, 0, 1, 1);


        gridLayout_2->addWidget(widget, 0, 1, 1, 1);

        widget_5 = new QWidget(Login);
        widget_5->setObjectName("widget_5");
        gridLayout_4 = new QGridLayout(widget_5);
        gridLayout_4->setObjectName("gridLayout_4");
        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName("widget_6");
        horizontalLayout_3 = new QHBoxLayout(widget_6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        gridLayout_4->addWidget(widget_6, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 1, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 2, 0, 1, 1);


        gridLayout_2->addWidget(widget_5, 0, 0, 1, 1);

        widget_3 = new QWidget(Login);
        widget_3->setObjectName("widget_3");
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        hideBtn = new QPushButton(widget_4);
        hideBtn->setObjectName("hideBtn");
        hideBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 255, 241);\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons_02/ICONS_02/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        hideBtn->setIcon(icon);

        horizontalLayout_2->addWidget(hideBtn);

        closeBtn = new QPushButton(widget_4);
        closeBtn->setObjectName("closeBtn");
        closeBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 255, 241);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons_02/ICONS_02/error.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeBtn->setIcon(icon1);

        horizontalLayout_2->addWidget(closeBtn);


        gridLayout_3->addWidget(widget_4, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 0, 1, 1);


        gridLayout_2->addWidget(widget_3, 0, 2, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        Logo->setText(QCoreApplication::translate("Login", "Logo", nullptr));
        rememberCb->setText(QCoreApplication::translate("Login", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        forgetBtn->setText(QCoreApplication::translate("Login", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("Login", "Password", nullptr));
        loginBtn->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        cancelBtn->setText(QCoreApplication::translate("Login", "\345\217\226\346\266\210", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("Login", "UserName", nullptr));
        hideBtn->setText(QString());
        closeBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

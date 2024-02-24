/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QScrollArea *centerScarea;
    QWidget *topSawc;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *newEvents;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QScrollArea *hotSales;
    QWidget *hotsales_sawc;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *hideBtn;
    QPushButton *FullBtn;
    QPushButton *closeBtn;
    QMenuBar *menubar;
    QMenu *menuDDAS;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1366, 768);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setAutoFillBackground(false);
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(widget_3);
        widget->setObjectName("widget");
        widget->setLayoutDirection(Qt::LeftToRight);
        widget->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        centerScarea = new QScrollArea(widget);
        centerScarea->setObjectName("centerScarea");
        centerScarea->setWidgetResizable(true);
        centerScarea->setAlignment(Qt::AlignCenter);
        topSawc = new QWidget();
        topSawc->setObjectName("topSawc");
        topSawc->setGeometry(QRect(0, 0, 1364, 697));
        gridLayout_4 = new QGridLayout(topSawc);
        gridLayout_4->setObjectName("gridLayout_4");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 2, 1, 1, 1);

        newEvents = new QWidget(topSawc);
        newEvents->setObjectName("newEvents");
        horizontalLayout_3 = new QHBoxLayout(newEvents);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label = new QLabel(newEvents);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        gridLayout_4->addWidget(newEvents, 3, 0, 1, 3);

        hotSales = new QScrollArea(topSawc);
        hotSales->setObjectName("hotSales");
        hotSales->setWidgetResizable(true);
        hotsales_sawc = new QWidget();
        hotsales_sawc->setObjectName("hotsales_sawc");
        hotsales_sawc->setGeometry(QRect(0, 0, 442, 153));
        horizontalLayout_4 = new QHBoxLayout(hotsales_sawc);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(hotsales_sawc);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        label_3 = new QLabel(hotsales_sawc);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        label_4 = new QLabel(hotsales_sawc);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        label_5 = new QLabel(hotsales_sawc);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        label_6 = new QLabel(hotsales_sawc);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        label_7 = new QLabel(hotsales_sawc);
        label_7->setObjectName("label_7");

        horizontalLayout_4->addWidget(label_7);

        hotSales->setWidget(hotsales_sawc);

        gridLayout_4->addWidget(hotSales, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 4, 1, 1, 1);

        centerScarea->setWidget(topSawc);

        gridLayout_2->addWidget(centerScarea, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget, 1, 0, 1, 1);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
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

        FullBtn = new QPushButton(widget_4);
        FullBtn->setObjectName("FullBtn");
        FullBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 255, 241);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons_02/ICONS_02/single.png"), QSize(), QIcon::Normal, QIcon::Off);
        FullBtn->setIcon(icon1);

        horizontalLayout_2->addWidget(FullBtn);

        closeBtn = new QPushButton(widget_4);
        closeBtn->setObjectName("closeBtn");
        closeBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 255, 241);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons_02/ICONS_02/error.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeBtn->setIcon(icon2);

        horizontalLayout_2->addWidget(closeBtn);


        gridLayout_3->addWidget(widget_4, 0, 0, 1, 1);


        gridLayout->addWidget(widget_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1366, 21));
        menuDDAS = new QMenu(menubar);
        menuDDAS->setObjectName("menuDDAS");
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuDDAS->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "123121414", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        hideBtn->setText(QString());
        FullBtn->setText(QString());
        closeBtn->setText(QString());
        menuDDAS->setTitle(QCoreApplication::translate("MainWindow", "DDAS", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\245\275\345\217\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

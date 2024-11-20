/********************************************************************************
** Form generated from reading UI file 'CircleGridStereoCalibration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CIRCLEGRIDSTEREOCALIBRATION_H
#define CIRCLEGRIDSTEREOCALIBRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_calibr;
    QPushButton *pushButton_test;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_info;
    QListWidget *listWidget_info;
    QLabel *label_intro;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *label_2;
    QLabel *label_imgShow;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(929, 588);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_calibr = new QPushButton(centralwidget);
        pushButton_calibr->setObjectName(QString::fromUtf8("pushButton_calibr"));
        pushButton_calibr->setGeometry(QRect(20, 10, 101, 31));
        pushButton_test = new QPushButton(centralwidget);
        pushButton_test->setObjectName(QString::fromUtf8("pushButton_test"));
        pushButton_test->setGeometry(QRect(170, 10, 101, 31));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(9, 60, 341, 491));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 339, 489));
        label_info = new QLabel(scrollAreaWidgetContents);
        label_info->setObjectName(QString::fromUtf8("label_info"));
        label_info->setGeometry(QRect(0, 0, 61, 31));
        listWidget_info = new QListWidget(scrollAreaWidgetContents);
        listWidget_info->setObjectName(QString::fromUtf8("listWidget_info"));
        listWidget_info->setGeometry(QRect(0, 30, 341, 461));
        label_intro = new QLabel(scrollAreaWidgetContents);
        label_intro->setObjectName(QString::fromUtf8("label_intro"));
        label_intro->setGeometry(QRect(10, 40, 321, 151));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(350, 60, 571, 491));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 569, 489));
        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 71, 31));
        label_imgShow = new QLabel(scrollAreaWidgetContents_2);
        label_imgShow->setObjectName(QString::fromUtf8("label_imgShow"));
        label_imgShow->setGeometry(QRect(0, 30, 571, 451));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 929, 28));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_calibr->setText(QCoreApplication::translate("MainWindow", "\344\270\200\351\224\256\346\240\207\345\256\232", nullptr));
        pushButton_test->setText(QCoreApplication::translate("MainWindow", "\344\270\200\351\224\256\346\265\213\350\257\225", nullptr));
        label_info->setText(QCoreApplication::translate("MainWindow", "\346\240\207\345\256\232\344\277\241\346\201\257", nullptr));
        label_intro->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\240\207\345\256\232\345\233\276\345\203\217", nullptr));
        label_imgShow->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CIRCLEGRIDSTEREOCALIBRATION_H

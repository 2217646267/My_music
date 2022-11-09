/********************************************************************************
** Form generated from reading UI file 'Qt_Music.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_MUSIC_H
#define UI_QT_MUSIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qt_MusicClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qt_MusicClass)
    {
        if (Qt_MusicClass->objectName().isEmpty())
            Qt_MusicClass->setObjectName(QString::fromUtf8("Qt_MusicClass"));
        Qt_MusicClass->resize(600, 400);
        menuBar = new QMenuBar(Qt_MusicClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Qt_MusicClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qt_MusicClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Qt_MusicClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Qt_MusicClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Qt_MusicClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Qt_MusicClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Qt_MusicClass->setStatusBar(statusBar);

        retranslateUi(Qt_MusicClass);

        QMetaObject::connectSlotsByName(Qt_MusicClass);
    } // setupUi

    void retranslateUi(QMainWindow *Qt_MusicClass)
    {
        Qt_MusicClass->setWindowTitle(QCoreApplication::translate("Qt_MusicClass", "Qt_Music", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qt_MusicClass: public Ui_Qt_MusicClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_MUSIC_H

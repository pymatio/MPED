/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Sat Nov 21 17:04:54 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionOpen;
    QAction *actionSave_As;
    QAction *actionQuit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonPlay;
    QPushButton *pushButton;
    QPushButton *pushButtonNext;
    QPushButton *pushButtonLocation;
    QPushButton *pushButton_3;
    QPushButton *pushButtonShuffle;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(447, 424);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowClass->sizePolicy().hasHeightForWidth());
        MainWindowClass->setSizePolicy(sizePolicy);
        MainWindowClass->setMinimumSize(QSize(115, 160));
        MainWindowClass->setDocumentMode(false);
        actionOpen = new QAction(MainWindowClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../../usr/share/icons/oxygen/32x32/actions/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave_As = new QAction(MainWindowClass);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../../../usr/share/icons/oxygen/32x32/actions/document-save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon1);
        actionQuit = new QAction(MainWindowClass);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../../../usr/share/icons/oxygen/32x32/actions/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon2);
        actionAbout = new QAction(MainWindowClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 441, 361));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonPlay = new QPushButton(widget);
        pushButtonPlay->setObjectName(QString::fromUtf8("pushButtonPlay"));
        pushButtonPlay->setMinimumSize(QSize(48, 48));
        pushButtonPlay->setAutoFillBackground(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../../../../usr/share/icons/oxygen/32x32/actions/media-playback-start.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPlay->setIcon(icon3);
        pushButtonPlay->setIconSize(QSize(32, 32));
        pushButtonPlay->setFlat(false);

        horizontalLayout->addWidget(pushButtonPlay);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(48, 48));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../../../../../usr/share/icons/oxygen/32x32/actions/media-skip-backward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButtonNext = new QPushButton(widget);
        pushButtonNext->setObjectName(QString::fromUtf8("pushButtonNext"));
        pushButtonNext->setMinimumSize(QSize(48, 48));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../../../../../usr/share/icons/oxygen/32x32/actions/media-skip-forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNext->setIcon(icon5);
        pushButtonNext->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButtonNext);

        pushButtonLocation = new QPushButton(widget);
        pushButtonLocation->setObjectName(QString::fromUtf8("pushButtonLocation"));
        pushButtonLocation->setMinimumSize(QSize(48, 48));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../../../../../usr/share/icons/oxygen/32x32/actions/media-eject.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLocation->setIcon(icon6);
        pushButtonLocation->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButtonLocation);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(48, 48));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../../../../../usr/share/icons/oxygen/32x32/actions/dialog-cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon7);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);

        pushButtonShuffle = new QPushButton(widget);
        pushButtonShuffle->setObjectName(QString::fromUtf8("pushButtonShuffle"));
        pushButtonShuffle->setMinimumSize(QSize(48, 48));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../../../../../usr/share/icons/oxygen/32x32/actions/roll.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonShuffle->setIcon(icon8);
        pushButtonShuffle->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButtonShuffle);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 447, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindowClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindowClass);
        QObject::connect(pushButtonPlay, SIGNAL(clicked()), MainWindowClass, SLOT(playPause()));
        QObject::connect(pushButtonLocation, SIGNAL(clicked()), MainWindowClass, SLOT(addFiles()));
        QObject::connect(pushButtonNext, SIGNAL(clicked()), MainWindowClass, SLOT(nextFile()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindowClass, SLOT(lastFile()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindowClass, SLOT(clear()));
        QObject::connect(pushButtonShuffle, SIGNAL(clicked()), MainWindowClass, SLOT(shuffle()));

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MPEDi", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindowClass", "Open", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("MainWindowClass", "Save As", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindowClass", "Quit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindowClass", "About", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindowClass", "Paused", 0, QApplication::UnicodeUTF8));
        pushButtonPlay->setText(QString());
        pushButton->setText(QString());
        pushButtonNext->setText(QString());
        pushButtonLocation->setText(QString());
        pushButton_3->setText(QString());
        pushButtonShuffle->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindowClass", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindowClass", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

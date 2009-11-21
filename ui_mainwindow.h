/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Sat Nov 21 14:06:42 2009
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
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonLocation;
    QPushButton *pushButtonPlay;
    QPushButton *pushButtonNext;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(115, 162);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowClass->sizePolicy().hasHeightForWidth());
        MainWindowClass->setSizePolicy(sizePolicy);
        MainWindowClass->setMinimumSize(QSize(115, 160));
        MainWindowClass->setMaximumSize(QSize(115, 162));
        MainWindowClass->setDocumentMode(false);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setMargin(11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButtonLocation = new QPushButton(centralWidget);
        pushButtonLocation->setObjectName(QString::fromUtf8("pushButtonLocation"));
        pushButtonLocation->setMinimumSize(QSize(48, 48));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../../usr/share/icons/oxygen/32x32/actions/media-eject.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonLocation->setIcon(icon);
        pushButtonLocation->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButtonLocation);

        pushButtonPlay = new QPushButton(centralWidget);
        pushButtonPlay->setObjectName(QString::fromUtf8("pushButtonPlay"));
        pushButtonPlay->setMinimumSize(QSize(48, 48));
        pushButtonPlay->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../../../usr/share/icons/oxygen/32x32/actions/media-playback-start.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPlay->setIcon(icon1);
        pushButtonPlay->setIconSize(QSize(32, 32));
        pushButtonPlay->setFlat(false);

        verticalLayout->addWidget(pushButtonPlay);

        pushButtonNext = new QPushButton(centralWidget);
        pushButtonNext->setObjectName(QString::fromUtf8("pushButtonNext"));
        pushButtonNext->setMinimumSize(QSize(48, 48));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../../../usr/share/icons/oxygen/32x32/actions/media-skip-forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNext->setIcon(icon2);
        pushButtonNext->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButtonNext);


        horizontalLayout->addLayout(verticalLayout);

        MainWindowClass->setCentralWidget(centralWidget);

        retranslateUi(MainWindowClass);
        QObject::connect(pushButtonPlay, SIGNAL(clicked()), MainWindowClass, SLOT(playPause()));
        QObject::connect(pushButtonLocation, SIGNAL(clicked()), MainWindowClass, SLOT(addFiles()));
        QObject::connect(pushButtonNext, SIGNAL(clicked()), MainWindowClass, SLOT(nextFile()));

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "mu", 0, QApplication::UnicodeUTF8));
        pushButtonLocation->setText(QString());
        pushButtonPlay->setText(QString());
        pushButtonNext->setText(QString());
        Q_UNUSED(MainWindowClass);
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QtGui/QMainWindow>
#include <QList>
#include <QFileDialog>
#include <QDesktopServices>

#include <QDebug>

#include <phonon>

#include <stdlib.h>

namespace Ui
{
    class MainWindowClass;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setLabel(QString s);
    void setLabelNowPlaying();
    void loadSession(std::string filename);
    void saveSession(std::string filename);
    char * home;
    std::string mpedf;

private slots:
    void playPause();
    void addFiles();
    void nextFile();
    void lastFile();
    void clear();
    void shuffle();
    void aboutToFinish();
    void finished();

private:
    Ui::MainWindowClass *ui;

    bool state;

    QList<Phonon::MediaSource> sources;

    Phonon::MediaObject *mediaObject;
    Phonon::AudioOutput *audioOutput;
    Phonon::MediaObject *metaInformationResolver;
};

#endif // MAINWINDOW_H

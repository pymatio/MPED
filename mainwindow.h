#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QtGui/QMainWindow>
#include <QList>
#include <QFileDialog>
#include <QDesktopServices>

#include <QDebug>

#include <phonon>

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

private slots:
    void playPause();
    void addFiles();
    void nextFile();
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

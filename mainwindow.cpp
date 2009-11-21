#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <fstream>


std::string extractFilename( const std::string& path ){
    return path.substr( path.find_last_of( '/' ) +1 );
}

void MainWindow::setLabel(QString s){
    ui->label->setText(s);
}

void MainWindow::setLabelNowPlaying(){
    std::string stds = "Now playing: ";
    stds += extractFilename(mediaObject->currentSource().fileName().toStdString());
    setLabel(QString::fromStdString(stds));
}

void MainWindow::loadSession(std::string filename){
    std::ifstream file(filename.c_str());
    int index;
    if (file.is_open()){
        char line[2000];
        file.getline(line, 2000);
        index = QString::fromStdString(line).toInt();
        while (!file.eof()){
            file.getline(line, 2000);
            if (std::string(line).length() > 1 && line[0] != ' ' && line[0] != '\n'){
                sources.append(Phonon::MediaSource(QString::fromStdString(line)));
            }
        }
    }
}

void MainWindow::saveSession(std::string filename){
    std::ofstream file(filename.c_str());
    if (file.is_open()){
        file << sources.indexOf(mediaObject->currentSource()) << "\n";
        foreach (Phonon::MediaSource source, sources){
            file << source.fileName().toStdString().c_str() << "\n";
        }
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindowClass)
{

     audioOutput = new Phonon::AudioOutput(Phonon::MusicCategory, this);
     mediaObject = new Phonon::MediaObject(this);
     metaInformationResolver = new Phonon::MediaObject(this);

     connect(mediaObject, SIGNAL(aboutToFinish()), this, SLOT(aboutToFinish()));
     connect(mediaObject, SIGNAL(finished()), this, SLOT(finished()));

     mediaObject->setTickInterval(1000);

     Phonon::createPath(mediaObject, audioOutput);

     ui->setupUi(this);

     ui->pushButtonPlay->setCheckable(true);

     home = getenv ("HOME");
     mpedf = home ;
     mpedf += "/.mped/default.session";
     loadSession(mpedf);
     mediaObject->setCurrentSource(sources.at(0));
}

MainWindow::~MainWindow()
{
    saveSession(mpedf);
    delete ui;
}

void MainWindow::playPause()
{

    switch (mediaObject->state()){
        case Phonon::PlayingState:
            mediaObject->pause();
            ui->pushButtonPlay->setChecked(false);
            setLabel("Paused");
            break;
        case Phonon::PausedState:
            if (sources.size() > 0){
                mediaObject->play();
                setLabelNowPlaying();
            }
            break;
        case Phonon::StoppedState:
            if (sources.size() > 0){
                mediaObject->play();
                setLabelNowPlaying();
            }
            break;
        case Phonon::LoadingState:
            ui->pushButtonPlay->setChecked(false);
            setLabel("Paused");
            break;
    }
}

 void MainWindow::addFiles()
{
    QStringList files = QFileDialog::getOpenFileNames(this, tr("Select Music Files"),
        QDesktopServices::storageLocation(QDesktopServices::MusicLocation));

    ui->pushButtonPlay->setChecked(false);
    if (files.isEmpty())
        return;
    foreach (QString string, files) {
            Phonon::MediaSource source(string);
        sources.append(source);
    }
    if (!sources.isEmpty()){
        metaInformationResolver->setCurrentSource(sources.at(0));
        mediaObject->setCurrentSource(metaInformationResolver->currentSource());

    }
}

void MainWindow::nextFile()
{

    int index = sources.indexOf(mediaObject->currentSource()) + 1;

    if (sources.size() > index) {
         mediaObject->stop();
         mediaObject->clearQueue();
         mediaObject->setCurrentSource(sources.at(index));
         mediaObject->play();
         setLabelNowPlaying();
     }
}

void MainWindow::lastFile(){
    int index = sources.indexOf(mediaObject->currentSource()) - 1;

    if (sources.size() > index && index >= 0) {
         mediaObject->stop();
         mediaObject->clearQueue();
         mediaObject->setCurrentSource(sources.at(index));
         mediaObject->play();
         setLabelNowPlaying();
     }
}

void MainWindow::clear(){
    mediaObject->stop();
    sources.clear();
    mediaObject->clearQueue();
}

void MainWindow::shuffle(){}

void MainWindow::aboutToFinish()
{

    int index = sources.indexOf(mediaObject->currentSource()) + 1;

     if (sources.size() > index) {
         mediaObject->enqueue(sources.at(index));
     } else {
         ui->pushButtonPlay->setChecked(false);
     }

}

void MainWindow::finished()
{
    ui->pushButtonPlay->setChecked(false);

}

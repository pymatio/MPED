#include "mainwindow.h"
#include "ui_mainwindow.h"


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
}

MainWindow::~MainWindow()
{
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
            mediaObject->play();
            setLabelNowPlaying();
            break;
        case Phonon::StoppedState:
            mediaObject->play();
            setLabelNowPlaying();
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
    int index = sources.size();
    foreach (QString string, files) {
            Phonon::MediaSource source(string);
        sources.append(source);
    }
    if (!sources.isEmpty()){
        metaInformationResolver->setCurrentSource(sources.at(index));
        mediaObject->setCurrentSource(metaInformationResolver->currentSource());

    }
}

void MainWindow::nextFile()
{

    int index = sources.indexOf(mediaObject->currentSource()) + 1;

    if (sources.size() > index) {
         mediaObject->stop();
         mediaObject->setCurrentSource(sources.at(index));
         mediaObject->play();
     }
}

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

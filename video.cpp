#include "video.h"
#include "ui_video.h"

video::video(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::video)
{
    ui->setupUi(this);
    player = new QMediaPlayer();
    audioOutput = new QAudioOutput;

    player->setAudioOutput(audioOutput);
    player->setSource(QUrl("qrc:/video/video/ikunVideo.mp4"));
    player->setVideoOutput(ui->widgetVideo);
    player->play();

}

video::~video()
{
    delete ui;
}

void video::closeEvent(QCloseEvent *event)
{
    Q_UNUSED(event);
    delete player;
    delete audioOutput;
}

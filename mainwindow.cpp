#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "video.h"
#include<QLabel>
#include<QDialog>
#include<QMessageBox>
#include<QCloseEvent>
#include<QPushButton>
#include<QtMultimedia>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // AboutUnderMore();
    QPixmap *pixmap=new QPixmap(":/images/images/background.jpg");
    //设置图像适应大小
    pixmap->scaled(ui->label->size(), Qt::KeepAspectRatio);
    ui->label->setScaledContents(true);
    ui->label->setPixmap(*pixmap);

}

MainWindow::~MainWindow()
{
}

//void MainWindow::AboutUnderMore()
//{
//    connect(ui->actionAbout, &QAction::triggered, [=]() {
//        //模态对话框
//        QDialog qd(this);
//        qd.setWindowTitle("关于");
//        qd.setWindowIcon(QIcon(":/ico/cool.png"));
//        qd.setMinimumSize(350,200);
//        qd.setMaximumSize(350,200);
//        QLabel* ql1 = new QLabel(&qd);
//        ql1->setText("开发人员:我真的不会写代码");
//        ql1->move(5, 20);
//        ql1->setFont(*font);
//        ql1->setTextInteractionFlags(Qt::TextSelectableByMouse);
//        QLabel* ql2 = new QLabel(&qd);
//        ql2->setText("邮箱:ztheng010726@gmail.com");
//        ql2->move(5, 60);
//        ql2->setFont(*font);
//        ql2->setTextInteractionFlags(Qt::TextSelectableByMouse);
//        QLabel* ql3 = new QLabel(&qd);
//        ql3->setText("QQ:2321852318");
//        ql3->move(5, 100);
//        ql3->setFont(*font);
//        ql3->setTextInteractionFlags(Qt::TextSelectableByMouse);        QLabel* ql4 = new QLabel(&qd);
//        ql4->setText("编程语言：C++、QT");
//        ql4->move(5, 140);
//        ql4->setFont(*font);
//        ql4->setTextInteractionFlags(Qt::TextSelectableByMouse);
//        qd.exec();

//    });
//}

//重写关闭窗口的一个脑残函数 sb
void MainWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton button;

            button=QMessageBox::question(this,tr("退出程序"),QString(tr("确认退出程序")),QMessageBox::Yes|QMessageBox::No);

            if(button==QMessageBox::No)

            {

                event->ignore(); // 忽略退出信号，程序继续进行

            }

            else if(button==QMessageBox::Yes)

            {

                event->accept(); // 接受退出信号，程序退出

            }

}



//道歉会不会
void MainWindow::on_btn_apologize_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    QAudioOutput* audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);
    player->setSource(QUrl("qrc:/sounds/sounds/apologize.wav"));
    player->play();
}

//你干嘛
void MainWindow::on_btn_niGanMa_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    QAudioOutput* audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);
    player->setSource(QUrl("qrc:/sounds/sounds/niganma.mp3"));
    player->play();
}


void MainWindow::on_btn_Chiken_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    QAudioOutput* audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);
    player->setSource(QUrl("qrc:/sounds/sounds/Chiken.mp3"));
    player->play();
}


void MainWindow::on_btn_whetherBeautiful_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    QAudioOutput* audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);
    player->setSource(QUrl("qrc:/sounds/sounds/WhetherBeautiful.mp3"));
    player->play();
}


void MainWindow::on_btn_soBeautiful_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    QAudioOutput* audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);
    player->setSource(QUrl("qrc:/sounds/sounds/TooBeautiful.mp3"));
    player->play();
}


void MainWindow::on_btn_realMan_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    QAudioOutput* audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);
    player->setSource(QUrl("qrc:/sounds/sounds/realMan.wav"));
    player->play();
}


void MainWindow::on_btn_powerful_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
        QAudioOutput* audioOutput = new QAudioOutput;
        player->setAudioOutput(audioOutput);
        player->setSource(QUrl("qrc:/sounds/sounds/isPowerful.mp3"));
        player->play();
}
void MainWindow::on_btn_isYou_clicked()
{
    QMediaPlayer *player = new QMediaPlayer;
    QAudioOutput* audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);
    player->setSource(QUrl("qrc:/sounds/sounds/isYou.mp3"));
    player->play();
}


void MainWindow::on_btn_video_clicked()
{
    this->_video=new video;
    this->_video->show();
}


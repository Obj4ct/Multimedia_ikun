#include "changeimage.h"
#include "mymessagebox.h"
#include <QAudioOutput>
#include <QCloseEvent>
#include <QMediaPlayer>
#include <QMessageBox>
#include <QPushButton>

ChangeImage::ChangeImage(QWidget *parent)
    : QWidget{parent}
{
    pixMap.load(":/images/images/ikun.jpg");

}

void ChangeImage::enterEvent(QEnterEvent *event)
{
    //event参数不使用
    Q_UNUSED(event);
    //加载图片
    pixMap.load(":/images/images/ikun2.jpg");
    //刷新
    update();

}

void ChangeImage::leaveEvent(QEvent *event)
{
    //event参数不使用
    Q_UNUSED(event);
    pixMap.load(":/images/images/ikun.jpg");
    update();
}

void ChangeImage::mousePressEvent(QMouseEvent *event)
{
    static int num=0;
    num++;
    //event参数不使用
    Q_UNUSED(event);
    if(num==4)
    {
        QPushButton* okBtn = new QPushButton("我不敢了");
        QPushButton* cancelBtn = new QPushButton("请保持理智");
        QMessageBox *myBox=new QMessageBox;
        QString str = "小黑子没完了是吧?";
        myBox->setWindowFlags(Qt::SubWindow);
        myBox->setIcon(QMessageBox::Warning);
        myBox->setWindowTitle("还点?");
        myBox->setText(str);
        myBox->addButton(okBtn, QMessageBox::AcceptRole);
        myBox->addButton(cancelBtn, QMessageBox::RejectRole);
        myBox->show();
        myBox->exec();//阻塞等待用户输入

        if (myBox->clickedButton() == okBtn)
        {
            QMessageBox::information(this,"ok","你最好是");
        }
        else if (myBox->clickedButton() == cancelBtn)
        {
            //QMessageBox::information(this,"律师函警告","小黑子开庭别求我");
            MyMessageBox *myBox=new MyMessageBox();
            myBox->show();
            QMediaPlayer *player = new QMediaPlayer;
            QAudioOutput* audioOutput = new QAudioOutput;
            player->setAudioOutput(audioOutput);
            player->setSource(QUrl("qrc:/sounds/sounds/lizhi.mp3"));
            player->play();

        }

        num=0;
    }
    pixMap.load(":/images/images/noway.jpg");
    update();
}

void ChangeImage::mouseReleaseEvent(QMouseEvent *event)
{
    //event参数不使用
    Q_UNUSED(event);
    pixMap.load(":/images/images/ikun.jpg");
    update();
}
void ChangeImage::paintEvent(QPaintEvent *event)
{
    //event参数不使用
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawPixmap(rect(),pixMap);
}

void ChangeImage::mouseDoubleClickEvent(QMouseEvent *event)
{
    //event参数不使用
    Q_UNUSED(event);
    pixMap.load(":/images/images/dontHarmMe.jpg");
    update();
}




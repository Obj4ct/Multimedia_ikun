#ifndef VIDEO_H
#define VIDEO_H

#include <QAudioOutput>
#include <QMediaPlayer>
#include <QWidget>


namespace Ui {
class video;
}

class video : public QWidget
{
    Q_OBJECT

public:
    explicit video(QWidget *parent = nullptr);
    ~video();
protected:
    //重写关闭窗口的一个脑残函数 sb
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::video *ui;
    QMediaPlayer *player;
    QAudioOutput* audioOutput;
};

#endif // VIDEO_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include"video.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //关于
    //void AboutUnderMore();

protected:
    //重写关闭窗口的一个脑残函数 sb
    void closeEvent(QCloseEvent *event) override;


private slots:
    void on_btn_apologize_clicked();

    void on_btn_niGanMa_clicked();

    void on_btn_Chiken_clicked();

    void on_btn_whetherBeautiful_clicked();

    void on_btn_soBeautiful_clicked();

    void on_btn_realMan_clicked();

    void on_btn_powerful_clicked();

    void on_btn_isYou_clicked();

    void on_btn_video_clicked();

private:
    Ui::MainWindow *ui;
    video *_video;//视频页面
    QFont* font = new QFont("等线", 14, 75);

};
#endif // MAINWINDOW_H

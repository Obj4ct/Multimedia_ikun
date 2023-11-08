#ifndef CHANGEIMAGE_H
#define CHANGEIMAGE_H
#include <QWidget>
#include<QPixmap>
#include<QPainter>
class ChangeImage : public QWidget
{
    Q_OBJECT
public:
    explicit ChangeImage(QWidget *parent = nullptr);
protected:
    //鼠标进入
    void enterEvent(QEnterEvent *event) override;
    //鼠标离开
    void leaveEvent(QEvent *event) override;
    //绘图事件
    void paintEvent(QPaintEvent *event) override;
    //双击鼠标
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    //单击鼠标
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

signals:

private:
    QPixmap pixMap;
};

#endif // CHANGEIMAGE_H

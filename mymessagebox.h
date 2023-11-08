#include <QMessageBox>
#include <QPushButton>
#include <QWidget>

class MyMessageBox : public QWidget
{
    Q_OBJECT
public:
    explicit MyMessageBox(QWidget *parent = nullptr);
     QMessageBox *court;
     QPushButton* myBtn=new QPushButton("ok");
protected:
    //重写关闭窗口的一个脑残函数 sb
     void closeEvent(QCloseEvent *event) override;
signals:

};


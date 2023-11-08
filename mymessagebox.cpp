#include "mymessagebox.h"

#include <QLabel>

MyMessageBox::MyMessageBox(QWidget *parent)
    : QWidget{parent}
{
    setWindowFlags(Qt::Dialog);   //窗体没有最大化最小化按钮
    QLabel *label=new QLabel(this);
    this->setWindowTitle("律师函警告");
    this->resize(240,90);
    this->setMinimumSize(240,90);
    this->setMaximumSize(240,90);
    label->setWordWrap(true);
    label->setText("我国《刑法》第246条，故意散布贬损他人人格破坏他人名誉，本罪在犯罪客观方面表现为行为人实施程造并散布某种虚构的事实，足以贬损他人人格、名誉,处时长两年半的有期练习生。");
}

void MyMessageBox::closeEvent(QCloseEvent *event)
{

}

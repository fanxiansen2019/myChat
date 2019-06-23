#include "diaoglist.h"
#include "ui_diaoglist.h"

#include <QToolButton>

DiaogList::DiaogList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DiaogList)
{
    ui->setupUi(this);

    //设置标题
    setWindowTitle("myChat");
    //设置图标
    setWindowIcon(QPixmap(":/images/qq.png"));

    //设置头像
    QToolButton * btn = new QToolButton;
    //设置文字
    btn->setText("斧头帮主");
    //设置头像
    btn->setIcon(QPixmap(":/images/ftbz.png"));
    //设置头像大小
    btn->setIconSize(QPixmap(":/images/ftbz.png").size());
    //社会组按钮风格 透明
    btn->setAutoRaise(true);
    //设置文字和图片一起显示
    btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    //加载到垂直布局当中
    ui->vLayout->addWidget(btn);
}

DiaogList::~DiaogList()
{
    delete ui;
}

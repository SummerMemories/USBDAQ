#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //去掉标题栏
    this->setWindowFlags(Qt::FramelessWindowHint);

    //设置父窗口为透明
    this->setAttribute(Qt::WA_TranslucentBackground);

    //阴影边框效果类
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect();
    //设置圆角
    shadow->setBlurRadius(10);
    //设置颜色
    shadow->setColor(Qt::black);
    //设置偏移
    shadow->setOffset(0);

    ui->shadowWidget->setGraphicsEffect(shadow);

    //改变按钮的样式
    changeStyle();

    //设置定时器
    m_Timer1 = new QTimer;
    connect(m_Timer1, SIGNAL(timeout()), this, SLOT(onUpdateLineEdit()));

}

Widget::~Widget()
{
    delete ui;
}


//改变按钮样式
void Widget::changeStyle()
{
    QFile styleSheet(":/style/style.qss");
    styleSheet.open(QIODevice::ReadOnly);
    QString qss = styleSheet.readAll();
    //改变按钮的样式表
    ui->btnClose->setStyleSheet(qss);
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    QWidget::mouseMoveEvent(event);

    if(this->z == QPoint())
        return ;

    //鼠标相对桌面左上角位置
    QPoint y = event->globalPos();

    QPoint x = y - this->z;

    this->move(x);
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    QWidget::mousePressEvent(event);
    //计算公式 x = y - z

    //鼠标相对桌面左上角位置
    QPoint y = event->globalPos();

    //边框左上角相对于桌面左上角的位置
    QPoint x = this->geometry().topLeft();

    this->z = y - x;
}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    QWidget::mouseReleaseEvent(event);

    this->z  = QPoint();
}


//给按钮设置点击事件
void Widget::on_btnClose_clicked()
{
    this->close();
}

//打开设备
void Widget::on_btnOpenDevice_clicked()
{
    int result = OpenUsbV12();
    if(result == -1)
    {

    }
    else {

    }
    qDebug()<<result;
}

//关闭设备
void Widget::on_btnCloseDevice_clicked()
{
    m_Timer1->stop();
    int result = CloseUsbV12();
    if(result == -1)
    {

    }
    else {

    }
    qDebug()<<result;
}


//AD1单通道连续采样设置，并启动AD采集
void Widget::on_btnGetData1_clicked()
{
    if(m_Timer1->isActive())
    {
        m_Timer1->stop();
    }
    else {
        //单位为毫秒值 设置获取数据间隔时间
        m_Timer1->start(1);
    }

}

//实时跟新并且显示获取的数据值
void Widget::onUpdateLineEdit()
{
    float adResult[10]={0.0};
    QString Result[10];
    for(int i = 0; i < 10; i++)
        ADSingleV12(0, i, 1, &adResult[i]);

    for(int i =0 ; i < 10; i++)
        Result[i] = QString::number(adResult[i], 'f', 2);

    ui->showData1_action->setText(Result[0]);
    ui->showData2_action->setText(Result[1]);
    ui->showData3_action->setText(Result[2]);
    ui->showData4_action->setText(Result[3]);
    ui->showData5_action->setText(Result[4]);
    ui->showData6_action->setText(Result[5]);
    ui->showData7_action->setText(Result[6]);
    ui->showData8_action->setText(Result[7]);
    //ui->showData9_action->setText(Result[8]);
    //ui->showData10_action->setText(Result[9]);
}

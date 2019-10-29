#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //初始化图形界面
    initUi();
    //改变按钮的样式
    changeStyle();
    m_Timer = new QTimer();

    m_portNameList = getPortNameList();
    ui->ComName->addItems(m_portNameList);

    //QObject::connect(&serial, &QSerialPort::readyRead, this, &Widget::serialPort_readyRead);
    connect(m_Timer,SIGNAL(timeout()),this,SLOT(serialPort_readyRead()));
    m_Timer->start(2000);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::initUi()
{
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

//得到端口名字并存入StringList列表中，然后在ComboBox中显示
QStringList Widget::getPortNameList()
{
    QStringList m_serialPortName;
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        m_serialPortName << info.portName();
        qDebug()<<"serialPortName:"<<info.portName();
    }
    return m_serialPortName;
}


void Widget::on_btn_Openport_clicked()
{
    if(ui->btn_Openport->text()==QString("打开串口"))
    {
        //设置串口名
        serial.setPortName(ui->ComName->currentText());
        serial.setBaudRate(QSerialPort::Baud115200,QSerialPort::AllDirections);//设置波特率和读写方向
        serial.setDataBits(QSerialPort::Data8);      //数据位为8位
        serial.setFlowControl(QSerialPort::NoFlowControl);//无流控制
        serial.setParity(QSerialPort::NoParity); //无校验位
        serial.setStopBits(QSerialPort::OneStop); //一位停止位

        //打开串口
        if(!serial.open(QIODevice::ReadWrite))
        {
            qDebug()<<"无法打开串口";
            return;
        }
        ui->btn_Openport->setText("关闭串口");

    }
    else
    {
        serial.close();
        m_Timer->stop();
        ui->btn_Openport->setText("打开串口");
    }
}

//接收从单片机发送来的信息并且解析
void Widget::serialPort_readyRead()
{
    //从接收缓冲区中读取数据
    QByteArray buffer = serial.readAll();
    QString str;
    if(!buffer.isEmpty())
    {
        str = buffer;
        if(str.endsWith("\n"))
        {
            ui->showData1_action->setText(str);
        }
    }
    qDebug()<<"receive str:"<< str;
}

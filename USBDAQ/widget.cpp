﻿#include "widget.h"
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
    //m_Timer->start(2000);
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

    for(int i = 0; i < 50; i++)
    {
        flag[i] = flag[i] + "g" + std::to_string(i);
        QString s = QString::fromStdString(flag[i]);
        qDebug() << s;
    }

    ui->lineEdit->setFocusPolicy(Qt::NoFocus);
    ui->lineEdit_2->setFocusPolicy(Qt::NoFocus);
    ui->lineEdit_5->setFocusPolicy(Qt::NoFocus);

    changeTableWidget();
    addLogo();
}

void Widget::addLogo()
{
    QPixmap *pixmap = new QPixmap(":/resource/1.png");
    pixmap->scaled(ui->label_3->size(), Qt::KeepAspectRatio);
    ui->label_3->setScaledContents(true);
    ui->label_3->setPixmap(*pixmap);
}

void Widget::changeTableWidget()
{
    ui->tableWidget->verticalHeader()->setVisible(false);//隐藏列表头
    //ui->tableWidget->horizontalHeader()->setVisible(false);//隐藏行表头
    ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background-color:skyblue;};");
    ui->tableWidget->horizontalHeader()->setFont(QFont("Timers" , 10 ,  QFont::Bold));
    ui->tableWidget->horizontalHeader()->setFixedHeight(50);
    ui->tableWidget->horizontalHeader()->resizeSection(4,150);
    ui->tableWidget->horizontalHeader()->resizeSection(5,150);
    //ui->tableWidget->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

    ui->tableWidget->setSpan(0, 0, 6, 1);

    ui->tableWidget->setSpan(0, 1, 6, 1);

    ui->tableWidget->setSpan(0, 2, 6, 1);


    counts = 0;
    newItem[counts] = new QTableWidgetItem;     //既然setSpan()函数破坏了itemAt()的索引，我们可以通过重新建立新的item的方式进行访问方法如下
    ui->tableWidget->setItem(0, 0, newItem[counts]);
    newItem[counts]->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    newItem[counts]->setText("1");
    counts++;

    newItem[counts] = new QTableWidgetItem;     //既然setSpan()函数破坏了itemAt()的索引，我们可以通过重新建立新的item的方式进行访问方法如下
    ui->tableWidget->setItem(5, 3, newItem[counts]);
    newItem[counts]->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    newItem[counts]->setText("平均值");
    counts++;


}

//改变按钮样式
void Widget::changeStyle()
{
    QFile styleSheet(":/style/style.qss");
    styleSheet.open(QIODevice::ReadOnly);
    QString qss = styleSheet.readAll();
    //改变按钮的样式表
    ui->btnClose->setStyleSheet(qss);
    ui->btnMin->setStyleSheet(qss);
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
        m_Timer->start(2000);
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
    QString str1 = buffer;

    std::string p = str1.toStdString();
    for(int i = 0; i < 50; i++)
        nPos[i] = p.find(flag[i]);
    for(int i = 0; i < 50; i++)
    {
        unsigned len = flag[i].length();
        if(i == 49)
        {
            str[i] = p.substr(nPos[i]+len);
        }
        str[i] = p.substr(nPos[i] + len,nPos[i+1]);
        //QString str2 = QString::fromStdString(str[i]);
    }
    setTableWidgetValue();
    //std::string::size_type nPos[] = p.find(flag);
    //p = p.substr(0, nPos);
    //QString str2 = QString::fromStdString(p);
    qDebug()<<"receive buffer:"<< buffer;
}

void Widget::setTableWidgetValue()
{
    for(int i = 0; i < 5; i++)
    {
        newItem[counts] = new QTableWidgetItem;     //既然setSpan()函数破坏了itemAt()的索引，我们可以通过重新建立新的item的方式进行访问方法如下
        ui->tableWidget->setItem(i, 3, newItem[counts]);
        newItem[counts]->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

        newItem[counts]->setText(QString::number(i));
        counts++;

        for(int j = 4; j < 10; j++)
        {
            newItem[counts] = new QTableWidgetItem;     //既然setSpan()函数破坏了itemAt()的索引，我们可以通过重新建立新的item的方式进行访问方法如下
            ui->tableWidget->setItem(i, j, newItem[counts]);
            newItem[counts]->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
            int cnt = i * 6 + j - 4;
            QString s = QString::fromStdString(str[cnt]);
            newItem[counts]->setText(s);
            counts++;
        }
    }

    newItem[counts] = new QTableWidgetItem;     //既然setSpan()函数破坏了itemAt()的索引，我们可以通过重新建立新的item的方式进行访问方法如下
    ui->tableWidget->setItem(0, 4, newItem[counts]);
    newItem[counts]->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    newItem[counts]->setText("1");
    counts++;
}

void Widget::Table2Excel(QTableWidget *table,QString title)
{
    QString fileName = QFileDialog::getSaveFileName(table, "保存",
        QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),"Excel 文件(*.xls *.xlsx)");
        if (fileName!="")
        {
            QAxObject *excel = new QAxObject;
            if (excel->setControl("Excel.Application")) //连接Excel控件
            {
                excel->dynamicCall("SetVisible (bool Visible)","false");//不显示窗体
                excel->setProperty("DisplayAlerts", false);//不显示任何警告信息。如果为true那么在关闭是会出现类似“文件已修改，是否保存”的提示
                QAxObject *workbooks = excel->querySubObject("WorkBooks");//获取工作簿集合
                workbooks->dynamicCall("Add");//新建一个工作簿
                QAxObject *workbook = excel->querySubObject("ActiveWorkBook");//获取当前工作簿
                QAxObject *worksheet = workbook->querySubObject("Worksheets(int)", 1);
                int i,j,colcount=table->columnCount();
                QAxObject *cell,*col;
                //标题行
                cell=worksheet->querySubObject("Cells(int,int)", 1, 1);
                cell->dynamicCall("SetValue(const QString&)", title);
                cell->querySubObject("Font")->setProperty("Size", 18);
                //调整行高
                worksheet->querySubObject("Range(const QString&)", "1:1")->setProperty("RowHeight", 30);
                //合并标题行
                QString cellTitle;
                cellTitle.append("A1:");
                cellTitle.append(QChar(colcount - 1 + 'A'));
                cellTitle.append(QString::number(1));
                QAxObject *range = worksheet->querySubObject("Range(const QString&)", cellTitle);
                range->setProperty("WrapText", true);
                range->setProperty("MergeCells", true);
                range->setProperty("HorizontalAlignment", -4108);//xlCenter
                range->setProperty("VerticalAlignment", -4108);//xlCenter
                //列标题
                for(i=0;i<colcount;i++)
                {
                    QString columnName;
                    columnName.append(QChar(i  + 'A'));
                    columnName.append(":");
                    columnName.append(QChar(i + 'A'));
                    col = worksheet->querySubObject("Columns(const QString&)", columnName);
                    col->setProperty("ColumnWidth", table->columnWidth(i)/6);
                    cell=worksheet->querySubObject("Cells(int,int)", 2, i+1);
                    columnName=table->horizontalHeaderItem(i)->text();
                    cell->dynamicCall("SetValue(const QString&)", columnName);
                    cell->querySubObject("Font")->setProperty("Bold", true);
                    cell->querySubObject("Interior")->setProperty("Color",QColor(191, 191, 191));
                    cell->setProperty("HorizontalAlignment", -4108);//xlCenter
                    cell->setProperty("VerticalAlignment", -4108);//xlCenter
                }
                //数据区
                for(i=0;i<table->rowCount();i++){
                    for (j=0;j<colcount;j++)
                    {
                        worksheet->querySubObject("Cells(int,int)", i+3, j+1)->dynamicCall("SetValue(const QString&)", table->item(i,j)?table->item(i,j)->text():"");
                    }
                }
                //画框线
                QString lrange;
                lrange.append("A2:");
                lrange.append(colcount - 1 + 'A');
                lrange.append(QString::number(table->rowCount() + 2));
                range = worksheet->querySubObject("Range(const QString&)", lrange);
                range->querySubObject("Borders")->setProperty("LineStyle", QString::number(1));
                range->querySubObject("Borders")->setProperty("Color", QColor(0, 0, 0));
                //调整数据区行高
                QString rowsName;
                rowsName.append("2:");
                rowsName.append(QString::number(table->rowCount() + 2));
                range = worksheet->querySubObject("Range(const QString&)", rowsName);
                range->setProperty("RowHeight", 20);
                workbook->dynamicCall("SaveAs(const QString&)",QDir::toNativeSeparators(fileName));//保存至fileName
                workbook->dynamicCall("Close()");//关闭工作簿
                excel->dynamicCall("Quit()");//关闭excel
                delete excel;
                excel=nullptr;
                if (QMessageBox::question(nullptr,"完成","文件已经导出，是否现在打开？",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
                {
                    QDesktopServices::openUrl(QUrl("file:///" + QDir::toNativeSeparators(fileName)));
                }
            }
            else
            {
                QMessageBox::warning(nullptr,"错误","未能创建 Excel 对象，请安装 Microsoft Excel。",QMessageBox::Apply);
            }
        }
}

void Widget::on_pushButton_5_clicked()
{
    Table2Excel(ui->tableWidget,"便携式开关操作箱继电器测试仪");
}

void Widget::on_btnMin_clicked()
{
    this->showMinimized();
}

#ifndef WIDGET_H
#define WIDGET_H

#include <QGraphicsDropShadowEffect>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QMessageBox>
#include <QCheckBox>
#include <QHBoxLayout>
#include <QProcess>
#include <QMouseEvent>
#include <QPushButton>
#include <QComboBox>
#include <QWidget>
#include <QPainter>
#include <QPoint>
#include <QFile>
#include <QKeyEvent>
#include <QDebug>
#include <QTimer>
#include <QTableWidgetItem>

#include <QTableWidget>
#include <QFileDialog>
#include <QDesktopServices>
#include <QMessageBox>
#include <QAxObject>

#include "flashitem.h"

#pragma execution_character_set("utf-8")

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    void initUi();
    void changeStyle();
    void changeTableWidget();
    void addLogo();

    void Table2Excel(QTableWidget *table,QString title);
    //打开串口
    void openPort();
    //获取所有可用的串口列表
    QStringList getPortNameList();

    void setTableWidgetValue();

    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);
    virtual void keyPressEvent(QKeyEvent * event);

private:
    Ui::Widget *ui;
    QPoint z;

    int counts;

    QTimer *m_Timer;
    QSerialPort serial;
    QGraphicsScene *scene;
    QStringList m_portNameList;

    std::string flag[50];
    std::string str[50];
    std::string::size_type nPos[50];

    QTableWidgetItem *newItem[50];

    QWidget *widget[5];
    QPushButton *delBtn[5];
    QCheckBox *checkBox[5];


private slots:
    void serialPort_readyRead();
    void on_btnClose_clicked();
    void on_btn_Openport_clicked();
    void on_pushButton_5_clicked();
    void on_btnMin_clicked();

    void clearRow1();
    void clearRow2();
    void clearRow3();
    void clearRow4();
    void clearRow5();

    void setRow1();
    void setRow2();
    void setRow3();
    void setRow4();
    void setRow5();
};

#endif // WIDGET_H

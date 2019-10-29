#ifndef WIDGET_H
#define WIDGET_H

#include <QGraphicsDropShadowEffect>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPushButton>
#include <QComboBox>
#include <QWidget>
#include <QPainter>
#include <QPoint>
#include <QFile>
#include <QDebug>
#include <QTimer>

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

    //打开串口
    void openPort();
    //获取所有可用的串口列表
    QStringList getPortNameList();

    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);

private:
    Ui::Widget *ui;
    QPoint z;

    QTimer *m_Timer;
    QSerialPort serial;
    QStringList m_portNameList;


private slots:
    void serialPort_readyRead();

    void on_btnClose_clicked();
    void on_btn_Openport_clicked();
};

#endif // WIDGET_H

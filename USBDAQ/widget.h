#ifndef WIDGET_H
#define WIDGET_H

#include <QGraphicsDropShadowEffect>
#include <QWidget>
#include "USBDAQ_DLL_V12.h"
#include <QMouseEvent>
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

    void changeStyle();

    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);


private:
    Ui::Widget *ui;
    QPoint z;

    QTimer *m_Timer1;

private slots:
    void on_btnClose_clicked();
    void on_btnOpenDevice_clicked();
    void on_btnCloseDevice_clicked();
    void on_btnGetData1_clicked();

    void onUpdateLineEdit();

};

#endif // WIDGET_H

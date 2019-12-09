#ifndef FLASHITEM_H
#define FLASHITEM_H
#include<QObject>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsEllipseItem>

#pragma execution_character_set("utf-8")

class flashitem:public QObject,public QGraphicsItem
{
public:
    bool flash; //这个用来标志重画函数
    flashitem();
    ~flashitem();
    QRectF boundingRect() const; //这个函数是vitual必须重新实现，否则所定义的类难以实例化

    void startFlash(bool Flash);


private:
     void timerEvent(QTimerEvent *); //重新实现timeEvent这个函数，定时器的作用

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    int m_TimeId;



};
#endif // FLASHITEM_H

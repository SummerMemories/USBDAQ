#include"flashitem.h"

void flashitem::timerEvent(QTimerEvent *)
{
    flash=!flash;
    this->update(); //估计重新执行paint这个函数
}

void flashitem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(Qt::blue);
    painter->setBrush(flash?(Qt::green):(Qt::red));
    painter->drawEllipse(-90,-90,80,80);

}

flashitem::flashitem()
{
    flash=true;
}

void flashitem::startFlash(bool Flash)
{
    if(Flash)
        m_TimeId = startTimer(400);
    else {
        flash = true;
        killTimer(m_TimeId);
    }

}

QRectF flashitem::boundingRect() const  //静态函数
{

    return QRectF(-400,-400,400,400);
}

flashitem::~flashitem()
{

}

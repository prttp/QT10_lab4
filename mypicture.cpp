#include "mypicture.h"

MyPicture::MyPicture(QWidget *parent) : QWidget(parent)
{
pixmap.load(":/pics/Koala.jpg");
scale = 1;
}
void  MyPicture::paintEvent(QPaintEvent * event) {
    QPixmap  tmp= pixmap.scaled(this->width()*scale/100, this->height()*scale/100, Qt::KeepAspectRatio);
    QPainter paint(this);
    QPoint point(0,0);
    paint.drawPixmap(point, tmp);
}
MyPicture::scaleChanged(int x) {
    scale = x;

    this->repaint();

}

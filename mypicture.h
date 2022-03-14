#ifndef MYPICTURE_H
#define MYPICTURE_H

#include <QWidget>
#include <QPainter>
class MyPicture : public QWidget
{
    Q_OBJECT
    QPixmap pixmap;
    double scale;
public:
    explicit MyPicture(QWidget *parent = nullptr);
    void  paintEvent(QPaintEvent * event);
    QString getScale();
signals:
public slots:
    scaleChanged(int);

};

#endif // MYPICTURE_H

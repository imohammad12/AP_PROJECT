#ifndef BALL_H
#define BALL_H

#include<QPoint>
#include<QGraphicsSceneMouseEvent>
#include<QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QObject>
#include <QTimer>

class Ball: public QObject ,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Ball();
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void changesize();
    void changepic();
    QTimer * timer = new QTimer();
    int x=1;
public slots:
    void rotate();
private:
    QPoint offset;
};

#endif // BALL_H

#ifndef STARTMENUER_H
#define STARTMENUER_H

#include <QObject>
#include <QGraphicsScene>
#include <QPushButton>
#include<QGraphicsView>
#include"score.h"

class StartMenueR : public QObject
{
    Q_OBJECT
public:
    StartMenueR(QObject *parent=0);
    QGraphicsView *v = new QGraphicsView();
    Score *score;
private:
    //QGraphicsView * view;
    QGraphicsScene * scene;
    QPushButton *play;


private slots:
    void pressedstartkey(bool);

    
};

#endif // STARTMENUER_H

#ifndef STARTMENU_H
#define STARTMENU_H

#include <QObject>
#include <QGraphicsScene>
#include <QPushButton>
#include<QGraphicsView>
#include"score.h"

class StartMenu : public QObject
{
    Q_OBJECT
public:
    StartMenu(QObject *parent=0);

    QGraphicsView * view;
private:

    QGraphicsScene * scene;
    QPushButton *playbutton;
    Score *score;

private slots:
    void pressedstartkey(bool);

    
};

#endif // STARTMENUER_H

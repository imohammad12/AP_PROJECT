#ifndef STARTMENU_H
#define STARTMENU_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include<QPushButton>

class Startmenu: public QGraphicsView{
public:
    Startmenu(QWidget * parent=0);

private:
    //QGraphicsView * view;
    QGraphicsScene * scene;
    QPushButton *play;

public slots:


};

#endif // STARTMENU_H

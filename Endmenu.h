#ifndef ENDMENU_H
#define ENDMENU_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include<QPushButton>

class Endmenu: public QGraphicsView{
public:
    Endmenu(QWidget * parent=0);

private:
    //QGraphicsView * view;
    QGraphicsScene * scene;
     QPushButton *playagain;

public slots:

};

#endif // ENDMENU_H
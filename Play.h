#ifndef PLAY_H
#define PLAY_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>

class Play: public QGraphicsView{
public:
    Play(QWidget * parent=0);

    QGraphicsScene * scene;


};

#endif // PLAY_H

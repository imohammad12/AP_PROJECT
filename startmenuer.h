#ifndef STARTMENUER_H
#define STARTMENUER_H

#include <QObject>
#include <QGraphicsScene>
#include <QPushButton>

class StartMenueR : public QObject
{
    Q_OBJECT
public:
    StartMenueR(QObject *parent=0);
private:
    //QGraphicsView * view;
    QGraphicsScene * scene;
    QPushButton *play;

private slots:
    void pressedstartkey(bool);

    
};

#endif // STARTMENUER_H

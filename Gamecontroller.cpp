#include"Gamecontroller.h"
#include "startmenuer.h"
#include "Play.h"
#include <QDebug>

StartMenueR *S;
Play * play;
Gamecontroller::Gamecontroller()
{
    //startmenu = new Startmenu();
    S = new StartMenueR;

    qDebug() <<"we resevied the constructor of gamecontroller";
}

void Gamecontroller::startgame()
{
    qDebug() <<"we resevied the start game";
    play= new Play;
    play->show();
}





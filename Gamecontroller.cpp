#include"Gamecontroller.h"
#include <QDebug>

StartMenueR *S;
Play * play;
Endmenu * E;

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
    play->Pview->show();
    S->v->close();

}

void Gamecontroller::endgame()
{

    play->Pview->close();
   // delete play->mediunmwall1;
    delete play->easywall1;

     delete play ;
    //delete play->mediunmwall2;
    E = new Endmenu;
}

void Gamecontroller::playagain()
{
    qDebug() <<"we resevied the play again";
    play= new Play;
    play->Pview->show();
    E->Eview->close();
}







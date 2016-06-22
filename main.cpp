#include <QApplication>
//#include"Startmenu.h"
#include"Endmenu.h"
#include"Play.h"
#include "Gamecontroller.h"

Gamecontroller * gamecontroller;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gamecontroller= new Gamecontroller;
    //Startmenu * start=new Startmenu;
    //Endmenu * end=new Endmenu;
   // Play *play=new Play;
//    Play * play;
//    play= new Play;
//    play->show();

    return a.exec();
}

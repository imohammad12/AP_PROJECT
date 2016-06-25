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
    gameover = new QMediaPlayer();
    gameover->setMedia(QUrl("qrc:/play/gameover.wav"));

    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/play/Difficult_.mp3"));
    music->play();
}

void Gamecontroller::startgame()
{
    qDebug() <<"we resevied the start game";
    play= new Play;
    play->Pview->show();
    S->v->close();

}

void Gamecontroller::endgameeasy()
{

    int scorep = play->score->returnscr();
//    }
    qDebug()<<"endmenu creation"<<scorep;

    if (gameover->state() == QMediaPlayer::PlayingState){
        gameover->setPosition(0);
    }
    else if (gameover->state() == QMediaPlayer::StoppedState){
        gameover->play();
    }

    play->Pview->close();

   // delete play->mediunmwall1;
    delete play->easywall1;

    delete play ;

    E = new Endmenu;
    E->score->showscore(scorep);
}
void Gamecontroller::endgamemedium()
{
    int scorep = play->score->returnscr();
    if (gameover->state() == QMediaPlayer::PlayingState){
        gameover->setPosition(0);
    }
    else if (gameover->state() == QMediaPlayer::StoppedState){
        gameover->play();
    }
    play->Pview->close();
    delete play->mediunmwall1;


     delete play ;

    E = new Endmenu;

    E->score->showscore(scorep);
}

void Gamecontroller::playagain()
{
    qDebug() <<"we resevied the play again";
    play= new Play;
    play->Pview->show();
    E->Eview->close();
}







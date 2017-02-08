#include "Score.h"
#include <QFont>
#include "globals.h"

Score::Score(){
    // draw the score text
    setPlainText(QString("Score: ") + QString::number(GJet->getScore()));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",14));
}

void Score::IncreaseBalloon()
{
    GJet->setScore(GJet->getScore()+60);
    setPlainText(QString("Score: ") + QString::number(GJet->getScore()));
}

void Score::IncreaseHeli()
{
    GJet->setScore(GJet->getScore()+60);
    setPlainText(QString("Score: ") + QString::number(GJet->getScore()));
}

void Score::IncreaseJet()
{
    GJet->setScore(GJet->getScore()+100);
    setPlainText(QString("Score: ") + QString::number(GJet->getScore()));
}

void Score::IncreaseShip()
{
    GJet->setScore(GJet->getScore()+30);
    setPlainText(QString("Score: ") + QString::number(GJet->getScore()));
}

void Score::IncreaseFuelDepot()
{
    GJet->setScore(GJet->getScore()+150);
    setPlainText(QString("Score: ") + QString::number(GJet->getScore()));
}

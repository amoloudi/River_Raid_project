#include "GMyJet.h"
#include "Gbullet.h"
#include "genemyjet.h"
#include "Genemyheli.h"
#include "genemyship.h"
#include "genemyballoon.h"
#include "gfueldepot.h"
#include <QKeyEvent>
#include "fuel.h"
#include "gameover.h"
#include "globals.h"

MyJet::MyJet(QGraphicsScene *scene)
{
    bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl("qrc:/sounds/bullet_sound.mp3"));

    GJet = new LogicJet();
    setPixmap(QPixmap(":/images/jet.png"));
    // add the item to the scene
    scene->addItem(this);
    //set position
    setPos(GJet->getPosX(),GJet->getPosY());
    // make rect focusable
    this->setFlag(QGraphicsItem::ItemIsFocusable);
    this->setFocus();

    // adding fuel
    fuel = new Fuel();
    fuel->setPos(fuel->x(),fuel->y()+650);
    scene->addItem(fuel);

    // adding score
    score = new Score();
    score->setPos(score->x(),score->y()+600);
    scene->addItem(score);
}

void MyJet::keyPressEvent(QKeyEvent *event){
    //Move Left - Check Left Border
    if (event->key() == Qt::Key_Left){
        if (GJet->getPosX() > 0)
        {
            if(GJet->getPosX() - 10 < 295)
            {
                // print GAME OVER
                GameOver* gameover = new GameOver();
                gameover->setPos(425,300);
                scene()->addItem(gameover);
                delete this;
                return;
            }
            setPos(x()-10,y());
            GJet->setPosX(GJet->getPosX()-10);
        }
    }
    //Move Right - CheckRight Border
    else if (event->key() == Qt::Key_Right){
        if (GJet->getPosX() + GJet->getWidth() < 1280)
        {
            if(GJet->getPosX() + GJet->getWidth() + 10 > 985)
            {
                // print GAME OVER
                GameOver* gameover = new GameOver();
                gameover->setPos(425,300);
                scene()->addItem(gameover);
                delete this;
                return;
            }
            setPos(x()+10,y());
            GJet->setPosX(GJet->getPosX()+10);
        }
    }
    //Shoot
    else if (event->key() == Qt::Key_Space){
            // create a bullet
            Bullet * bullet = new Bullet(GJet->getPosX(), GJet->getPosY());
            bullet->setPos(x()+10,y()-10);
            scene()->addItem(bullet);

            // play bulletsound
            if (bulletsound->state() == QMediaPlayer::PlayingState){
                bulletsound->setPosition(0);
            }
            else if (bulletsound->state() == QMediaPlayer::StoppedState){
                bulletsound->play();
            }
    }
}

void MyJet::spawnHeli(){
    // create a Heli enemy
    EnemyHeli * enemy = new EnemyHeli();
    scene()->addItem(enemy);
}
void MyJet::spawnShip(){
    // create a ship enemy
    EnemyShip * enemy = new EnemyShip();
    scene()->addItem(enemy);
}

void MyJet::spawnJet()
{
    // create a jet enemy
    EnemyJet * enemy = new EnemyJet();
    scene()->addItem(enemy);
}

void MyJet::spawnBalloon()
{
    // create a balloon enemy
    EnemyBalloon * enemy = new EnemyBalloon();
    scene()->addItem(enemy);
}

void MyJet::spawnFuelDepot()
{
    // create a Fuel Depot
    FuelDepot * enemy = new FuelDepot();
    scene()->addItem(enemy);
}

void MyJet::DecreaseFuel()
{
    if(GJet->getFuel() > 0)
        GJet->setFuel(GJet->getFuel()-1);
    fuel->update();
    if(GJet->getFuel() == 0)
    {
        // print GAME OVER
        GameOver* gameover = new GameOver();
        gameover->setPos(425,300);
        scene()->addItem(gameover);
        delete this;
        return;
    }
}

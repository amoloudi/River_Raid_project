#include "GMyJet.h"
#include "Gbullet.h"
#include "genemyjet.h"
#include "Genemyheli.h"
#include "genemyship.h"
#include "genemyballoon.h"
#include "gfueldepot.h"
#include <QKeyEvent>
#include "gameover.h"
#include "globals.h"

MyJet::MyJet(QGraphicsScene *scene)
{

    GJet = new LogicJet();
    setPixmap(QPixmap(":/images/jet.png"));
    // add the item to the scene
    scene->addItem(this);
    //set position
    setPos(GJet->getPosX(),GJet->getPosY());
    // make rect focusable
    this->setFlag(QGraphicsItem::ItemIsFocusable);
    this->setFocus();
}

void MyJet::keyPressEvent(QKeyEvent *event){
    //Move Left - Check Left Border
    if (event->key() == Qt::Key_Left){
        if (GJet->getPosX() > 0)
        {
            setPos(x()-10,y());
            GJet->setPosX(GJet->getPosX()-10);
        }
    }
    //Move Right - CheckRight Border
    else if (event->key() == Qt::Key_Right){
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

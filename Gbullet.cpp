#include "GBullet.h"
#include "lbullet.h"
#include "Genemyheli.h"
#include "genemyship.h"
#include "genemyballoon.h"
#include "genemyjet.h"
#include "gfueldepot.h"
#include <QTimer>
#include <typeinfo>
#include "globals.h"
#include <QGraphicsScene>
#include <QList>

Bullet::Bullet(int x, int y): QObject(), QGraphicsPixmapItem(){

    NewBullet = new LogicBullet(x, y);

    // drew the rect
    setPixmap(QPixmap(":/images/bullet.png"));

    // connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Bullet::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(EnemyHeli) || typeid(*(colliding_items[i])) == typeid(EnemyShip) || typeid(*(colliding_items[i])) == typeid(EnemyJet) || typeid(*(colliding_items[i])) == typeid(EnemyBalloon) || typeid(*(colliding_items[i])) == typeid(FuelDepot)){
            // speed up game
            if(GJet->getScore() > 250 && GJet->getScore() < 500 && GJet->getSpeed() == 5)
                GJet->setSpeed(1);
            else if(GJet->getScore() > 500 && GJet->getScore() < 750 && GJet->getSpeed() == 6)
                GJet->setSpeed(1);
            else if(GJet->getScore() > 750 && GJet->getScore() < 1000 && GJet->getSpeed() == 7)
                GJet->setSpeed(1);
            else if(GJet->getScore() > 1000 && GJet->getSpeed() == 8)
                GJet->setSpeed(2);
            // delete logic bullet
            delete NewBullet;
            // remove them both
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            // delete them both
            delete colliding_items[i];
            delete this;
            return;
        }
    }
    // move bullet up
    setPos(x(),y()-20);
    NewBullet->setPosY(NewBullet->getPosY()-10);
    if (NewBullet->getPosY() + NewBullet->getHeight() < 0){
        delete NewBullet;
        scene()->removeItem(this);
        delete this;
    }
}

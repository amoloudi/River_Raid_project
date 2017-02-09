#include "genemyship.h"
#include "Gmyjet.h"
#include "Lenemyship.h"
#include "genemyjet.h"
#include "gameover.h"
#include "globals.h"
#include <QTimer>
#include <typeinfo>
#include <QGraphicsScene>
#include <QList>

EnemyShip::EnemyShip(): QObject(), QGraphicsPixmapItem(){
    NewEnemyShip = new LogicEnemyShip();
    // drew the rect
    setPixmap(QPixmap(":/images/ship.png"));
    setPos(NewEnemyShip->getPosX(),NewEnemyShip->getPosY());
    // connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void EnemyShip::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(MyJet)){
            // print GAME OVER
            GameOver* gameover = new GameOver();
            gameover->setPos(425,300);
            scene()->addItem(gameover);
            // delete logic enemy ship
            delete NewEnemyShip;
            // remove them both
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            // delete them both
            delete colliding_items[i];
            delete this;
            return;
        }
    }
    // move enemy down
    setPos(x(),y()+GJet->getSpeed());
    NewEnemyShip->setPosY(NewEnemyShip->getPosY()+GJet->getSpeed());
    if (NewEnemyShip->getPosY() > 720){
        delete NewEnemyShip;
        scene()->removeItem(this);
        delete this;
    }
}


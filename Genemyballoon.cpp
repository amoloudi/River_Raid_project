#include "genemyballoon.h"
#include "Gmyjet.h"
#include "LenemyBalloon.h"
#include "Genemyheli.h"
#include <QTimer>
#include <typeinfo>
#include "globals.h"
#include <QGraphicsScene>
#include <QList>

EnemyBalloon::EnemyBalloon(): QObject(), QGraphicsPixmapItem(){
    NewEnemyBalloon = new LogicEnemyBalloon();
    setPixmap(QPixmap(":/images/balloon.png"));
    setPos(NewEnemyBalloon->getPosX(),NewEnemyBalloon->getPosY());
    // connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void EnemyBalloon::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(MyJet)){
            // delete logic enemy jet
            delete NewEnemyBalloon;
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
    NewEnemyBalloon->setPosY(NewEnemyBalloon->getPosY()+GJet->getSpeed());
    if (NewEnemyBalloon->getPosY() > 720){
        delete NewEnemyBalloon;
        scene()->removeItem(this);
        delete this;
    }
}

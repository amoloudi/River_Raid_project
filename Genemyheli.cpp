#include "Genemyheli.h"
#include "Gmyjet.h"
#include "Lenemyheli.h"
#include "globals.h"
#include <QTimer>
#include <typeinfo>
#include <QGraphicsScene>
#include <QList>

EnemyHeli::EnemyHeli(): QObject(), QGraphicsPixmapItem(){
    NewEnemyHeli = new LogicEnemyHeli();
    setPixmap(QPixmap(":/images/heli.png"));
    setPos(NewEnemyHeli->getPosX(),NewEnemyHeli->getPosY());
    // connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void EnemyHeli::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(MyJet)){
            // delete logic enemy jet
            delete NewEnemyHeli;
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
    NewEnemyHeli->setPosY(NewEnemyHeli->getPosY()+GJet->getSpeed());
    if (NewEnemyHeli->getPosY() > 720){
        delete NewEnemyHeli;
        scene()->removeItem(this);
        delete this;
    }
}

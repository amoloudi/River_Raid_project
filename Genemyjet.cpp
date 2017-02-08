#include "genemyjet.h"
#include "Gmyjet.h"
#include "lenemyjet.h"
#include "globals.h"
#include <QTimer>
#include <typeinfo>
#include <QGraphicsScene>
#include <QList>

EnemyJet::EnemyJet(): QObject(), QGraphicsPixmapItem(){
    NewEnemyJet = new LogicEnemyJet();
    if(NewEnemyJet->getDirection() == 0)
    {
        setPixmap(QPixmap(":/images/ejetMirrored.png"));
    }
    else
        setPixmap(QPixmap(":/images/ejet.png"));
    setPos(NewEnemyJet->getPosX(),NewEnemyJet->getPosY());
    // connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void EnemyJet::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(MyJet)){
            // delete logic enemy jet
            delete NewEnemyJet;
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
    if(NewEnemyJet->getDirection() == 0)
    {
        setPos(x()+25,y()+GJet->getSpeed());
        NewEnemyJet->setPosX(NewEnemyJet->getPosX()+25);
        NewEnemyJet->setPosY(NewEnemyJet->getPosY()+GJet->getSpeed());
    }
    else
    {
        setPos(x()-25,y()+GJet->getSpeed());
        NewEnemyJet->setPosX(NewEnemyJet->getPosX()-25);
        NewEnemyJet->setPosY(NewEnemyJet->getPosY()+GJet->getSpeed());
    }
    if (NewEnemyJet->getPosY() > 720 || NewEnemyJet->getPosX() < 0 || NewEnemyJet->getPosX() > 1280){
        delete NewEnemyJet;
        scene()->removeItem(this);
        delete this;
    }
}

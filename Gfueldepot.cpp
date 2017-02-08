#include "gfueldepot.h"
#include "LFuelDepot.h"
#include <QTimer>
#include <typeinfo>
#include <QGraphicsScene>
#include <QList>
#include "globals.h"
#include "Gmyjet.h"
#include "globals.h"

FuelDepot::FuelDepot(): QObject(), QGraphicsPixmapItem(){

    NewFuelDepot = new LogicFuelDepot();
    // drew the rect
    setPixmap(QPixmap(":/images/fuel.png"));
    setPos(NewFuelDepot->getPosX(),NewFuelDepot->getPosY());
    // connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void FuelDepot::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(MyJet)){
            if(GJet->getFuel()+2 > 100)
                GJet->setFuel(100);
            else
                GJet->setFuel(GJet->getFuel()+2);
        }
    }
    // move enemy down
    setPos(x(),y()+GJet->getSpeed());
    NewFuelDepot->setPosY(NewFuelDepot->getPosY()+GJet->getSpeed());
    if (NewFuelDepot->getPosY() > 720){
        delete NewFuelDepot;
        scene()->removeItem(this);
        delete this;
    }
}

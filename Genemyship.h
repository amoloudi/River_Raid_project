#ifndef GENEMYSHIP_H
#define GENEMYSHIP_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include "Lenemyship.h"

class EnemyShip: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
private:
    LogicEnemyShip * NewEnemyShip;
public:
    EnemyShip();
public slots:
    void move();
};

#endif // GENEMYSHIP_H

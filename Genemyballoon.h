#ifndef GENEMYBALLOON_H
#define GENEMYBALLOON_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include "lenemyballoon.h"

class EnemyBalloon: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
private:
    LogicEnemyBalloon * NewEnemyBalloon;
public:
    EnemyBalloon();
public slots:
    void move();
};

#endif // GENEMYBALLOON_H

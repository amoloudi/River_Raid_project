#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include "Lenemyheli.h"

class EnemyHeli: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
private:
    LogicEnemyHeli * NewEnemyHeli;
public:
    EnemyHeli();
public slots:
    void move();
};

#endif // ENEMY_H

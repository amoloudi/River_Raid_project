#ifndef GENEMYJET_H
#define GENEMYJET_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include "Lenemyjet.h"

class EnemyJet: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
private:
    LogicEnemyJet * NewEnemyJet;
public:
    EnemyJet();
public slots:
    void move();
};

#endif // GENEMYJET_H

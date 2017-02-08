#ifndef GFUELDEPOT_H
#define GFUELDEPOT_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include "lfueldepot.h"

class FuelDepot: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
private:
    LogicFuelDepot * NewFuelDepot;
public:
    FuelDepot();
public slots:
    void move();
};

#endif // GFUELDEPOT_H

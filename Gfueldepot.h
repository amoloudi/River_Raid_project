#ifndef GFUELDEPOT_H
#define GFUELDEPOT_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include "lfueldepot.h"
#include <QMediaPlayer>

class FuelDepot: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
private:
    QMediaPlayer * fuelSound;
    LogicFuelDepot * NewFuelDepot;
public:
    FuelDepot();
public slots:
    void move();
};

#endif // GFUELDEPOT_H

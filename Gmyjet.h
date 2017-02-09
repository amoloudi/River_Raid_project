#ifndef MYJET_H
#define MYJET_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMediaPlayer>
//#include "Lmyjet.h"
#include "globals.h"
#include "fuel.h"

class MyJet:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
private:
    QMediaPlayer * bulletsound;
    Fuel * fuel;
public:
    MyJet(QGraphicsScene * scene);
    void keyPressEvent(QKeyEvent * event);
public slots:
    void spawnHeli();
    void spawnShip();
    void spawnJet();
    void spawnBalloon();
    void spawnFuelDepot();
    void DecreaseFuel();
};

#endif // MYJET_H


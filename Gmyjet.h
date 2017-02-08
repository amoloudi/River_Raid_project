#ifndef MYJET_H
#define MYJET_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "globals.h"

class MyJet:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    MyJet(QGraphicsScene * scene);
    void keyPressEvent(QKeyEvent * event);
public slots:
    void spawnHeli();
    void spawnShip();
    void spawnJet();
    void spawnBalloon();
    void spawnFuelDepot();
};

#endif // MYJET_H

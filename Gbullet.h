#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include "lbullet.h"

class Bullet: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
private:
    LogicBullet * NewBullet;
public:
    Bullet(int x, int y);
public slots:
    void move();
};

#endif // BULLET_H

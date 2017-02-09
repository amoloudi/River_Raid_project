#include <QApplication>
#include "GMyJet.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMediaPlayer>
#include <QImage>
#include <QBrush>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    // create a scene
    QGraphicsScene * scene = new QGraphicsScene();

    // create an item to add to the scene
    MyJet * player = new MyJet(scene);
    player->setZValue(1);
    // create a view to visualize the scene
    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // show the view
    view->show();
    view->setFixedSize(1280,720);
    scene->setSceneRect(0,0,1280,720);
    scene->setBackgroundBrush(QBrush(QImage(":/images/map.png")));

    // spawn heli enemies
    QTimer * HeliTimer = new QTimer();
    QObject::connect(HeliTimer,SIGNAL(timeout()),player,SLOT(spawnHeli()));
    HeliTimer->start(4500);

    //spawn ship enemies
    QTimer * ShipTimer = new QTimer();
    QObject::connect(ShipTimer,SIGNAL(timeout()),player,SLOT(spawnShip()));
    ShipTimer->start(3500);

    //spawn jet enemies
    QTimer * JetTimer = new QTimer();
    QObject::connect(JetTimer,SIGNAL(timeout()),player,SLOT(spawnJet()));
    JetTimer->start(5000);

    //spawn balloon enemies
    QTimer * BalloonTimer = new QTimer();
    QObject::connect(BalloonTimer,SIGNAL(timeout()),player,SLOT(spawnBalloon()));
    BalloonTimer->start(12000);

    //spawn Fuel Depot
    QTimer * FuelDepotTimer = new QTimer();
    QObject::connect(FuelDepotTimer,SIGNAL(timeout()),player,SLOT(spawnFuelDepot()));
    FuelDepotTimer->start(9000);

    // add fuel
    QTimer * FuelTimer = new QTimer();
    QObject::connect(FuelTimer,SIGNAL(timeout()),player,SLOT(DecreaseFuel()));
    FuelTimer->start(500);


    // play background music
    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds/music.mp3"));
    music->play();

    return a.exec();
}

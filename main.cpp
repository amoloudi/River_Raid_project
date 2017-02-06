#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
// main
int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    
    // create a scene
    QGraphicsScene * scene = new QGraphicsScene();
    
    // create a view to visualize the scene
    QGraphicsView * view = new QGraphicsView(scene);
    
    // show the view
    view->show();
    view->setFixedSize(1280,720);
    scene->setSceneRect(0,0,1280,720);
    
    return a.exec();
}

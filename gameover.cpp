#include "gameover.h"
#include <QFont>

GameOver::GameOver()
{
    // draw the Game Over text
    setPlainText(QString("GAME OVER"));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",24));
}

#include "lenemyballoon.h"
#include <stdlib.h>

LogicEnemyBalloon::LogicEnemyBalloon()
{
    //set random position
    int RandNum = rand() % 38 + 572;
    PosX     = RandNum;
    PosY     = 0;
    Width    = 30;
    Height   = 30;
}

int LogicEnemyBalloon::getPosX()
{
    return PosX;
}

int LogicEnemyBalloon::getPosY()
{
    return PosY;
}

void LogicEnemyBalloon::setPosX(int x)
{
    PosX = x;
}

void LogicEnemyBalloon::setPosY(int y)
{
    PosY = y;
}

int LogicEnemyBalloon::getWidth()
{
    return Width;
}

int LogicEnemyBalloon::getHeight()
{
    return Height;
}

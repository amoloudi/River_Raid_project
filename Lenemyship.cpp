#include "Lenemyship.h"
#include <stdlib.h>

LogicEnemyShip::LogicEnemyShip()
{
    //set random position
    int RandNum1 = rand() % 76 + 436;
    int RandNum2 = rand() % 76 + 708;
    int RandNum  = rand() % 2;
    if(RandNum == 0)
        PosX = RandNum1;
    else if(RandNum == 1)
        PosX = RandNum2;
    PosY     = 0;
    Width    = 60;
    Height   = 30;
}

int LogicEnemyShip::getPosX()
{
    return PosX;
}

int LogicEnemyShip::getPosY()
{
    return PosY;
}

void LogicEnemyShip::setPosX(int x)
{
    PosX = x;
}

void LogicEnemyShip::setPosY(int y)
{
    PosY = y;
}

int LogicEnemyShip::getWidth()
{
    return Width;
}

int LogicEnemyShip::getHeight()
{
    return Height;
}

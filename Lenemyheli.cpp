#include "lenemyheli.h"
#include <stdlib.h>

LogicEnemyHeli::LogicEnemyHeli()
{
    //set random position
    int RandNum1 = rand() % 86 + 300;
    int RandNum2 = rand() % 86 + 844;
    int RandNum  = rand() % 2;
    if(RandNum == 0)
        PosX = RandNum1;
    else if(RandNum == 1)
        PosX = RandNum2;
    PosY     = 0;
    Width    = 50;
    Height   = 30;
}

int LogicEnemyHeli::getPosX()
{
    return PosX;
}

int LogicEnemyHeli::getPosY()
{
    return PosY;
}

void LogicEnemyHeli::setPosX(int x)
{
    PosX = x;
}

void LogicEnemyHeli::setPosY(int y)
{
    PosY = y;
}

int LogicEnemyHeli::getWidth()
{
    return Width;
}

int LogicEnemyHeli::getHeight()
{
    return Height;
}

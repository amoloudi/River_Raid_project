#include "lenemyjet.h"
#include <stdlib.h>

LogicEnemyJet::LogicEnemyJet()
{
    //set random position
    int RandNum = rand() % 2;
    if(RandNum == 0)
    {
        PosX = 0;
        Direction = 0;
    }
    else
    {
        PosX = 1280;
        Direction = 1;
    }
    RandNum = rand() % 200 + 200;
    PosY     = RandNum;
    Width    = 50;
    Height   = 30;
}

int LogicEnemyJet::getDirection()
{
    return Direction;
}

int LogicEnemyJet::getPosX()
{
    return PosX;
}

int LogicEnemyJet::getPosY()
{
    return PosY;
}

void LogicEnemyJet::setPosX(int x)
{
    PosX = x;
}

void LogicEnemyJet::setPosY(int y)
{
    PosY = y;
}

int LogicEnemyJet::getWidth()
{
    return Width;
}

int LogicEnemyJet::getHeight()
{
    return Height;
}

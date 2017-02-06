#include "lfueldepot.h"
#include <stdlib.h>

LogicFuelDepot::LogicFuelDepot()
{
    //set random position
    int RandNum = rand() % 38 + 640;
    PosX = RandNum;
    PosY     = 0;
    Width    = 30;
    Height   = 80;
}

int LogicFuelDepot::getPosX()
{
    return PosX;
}

int LogicFuelDepot::getPosY()
{
    return PosY;
}

void LogicFuelDepot::setPosX(int x)
{
    PosX = x;
}

void LogicFuelDepot::setPosY(int y)
{
    PosY = y;
}

int LogicFuelDepot::getWidth()
{
    return Width;
}

int LogicFuelDepot::getHeight()
{
    return Height;
}

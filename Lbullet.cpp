#include "lbullet.h"
LogicBullet::LogicBullet(int x, int y)
{
    PosX     = x+10;
    PosY     = y-10;
    Width    = 10;
    Height   = 10;
}

int LogicBullet::getPosX()
{
    return PosX;
}

int LogicBullet::getPosY()
{
    return PosY;
}

void LogicBullet::setPosX(int x)
{
    PosX = x;
}

void LogicBullet::setPosY(int y)
{
    PosY = y;
}

int LogicBullet::getWidth()
{
    return Width;
}

int LogicBullet::getHeight()
{
    return Height;
}

#include "Lmyjet.h"

LogicJet::LogicJet()
{
  
  
    PosX     = 630;
    PosY     = 680;
    Width    = 30;
    Height   = 40;
}


int LogicJet::getPosX()
{
    return PosX;
}

int LogicJet::getPosY()
{
    return PosY;
}

void LogicJet::setPosX(int x)
{
    PosX = x;
}

void LogicJet::setPosY(int y)
{
    PosY = y;
}

int LogicJet::getWidth()
{
    return Width;
}

int LogicJet::getHeight()
{
    return Height;
}

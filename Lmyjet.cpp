#include "Lmyjet.h"

LogicJet::LogicJet()
{
  
  
    PosX     = 630;
    Fuel     = 100;
    PosY     = 680;
    Width    = 30;
    Height   = 40;
}


int LogicJet::getPosX()
{
    return PosX;
}
int LogicJet::getFuel()
{
    return Fuel;
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
void LogicJet::setFuel(int F)
{
    Fuel = F;
}

int LogicJet::getWidth()
{
    return Width;
}

int LogicJet::getHeight()
{
    return Height;
}

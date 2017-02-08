#include "Lmyjet.h"

LogicJet::LogicJet()
{
    Score    = 0;
    Fuel     = 100;
    PosX     = 630;
    PosY     = 680;
    Speed    = 5;
    Width    = 30;
    Height   = 40;
}

int LogicJet::getScore()
{
    return Score;
}

int LogicJet::getFuel()
{
    return Fuel;
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

void LogicJet::setScore(int S)
{
    Score = S;
}

void LogicJet::setFuel(int F)
{
    Fuel = F;
}
// speed up
void LogicJet::setSpeed(int S)
{
    Speed += S;
}

int LogicJet::getSpeed()
{
    return Speed;
}

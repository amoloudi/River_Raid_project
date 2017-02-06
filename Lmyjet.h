#ifndef LOGICJET_H
#define LOGICJET_H

class LogicJet{
private:
 
    int PosX;
    int Fuel;
    int PosY;
    int Width;
    int Height;
public:
    LogicJet();
    int getFuel();
    int getPosX();
    int getPosY();
    void setPosX(int x);
    void setPosY(int y);
    void setFuel(int F);
    int getWidth();
    int getHeight();
};

#endif // LOGICJET_H

#ifndef LOGICJET_H
#define LOGICJET_H

class LogicJet{
private:
    int Score;
    int Speed;
    int Fuel;
    int PosX;
    int PosY;
    int Width;
    int Height;
public:
    LogicJet();
    int getScore();
    int getFuel();
    int getPosX();
    int getPosY();
    int getSpeed();
    void setPosX(int x);
    void setPosY(int y);
    int getWidth();
    int getHeight();
    void setScore(int S);
    void setFuel(int F);
    void setSpeed(int S);
};

#endif // LOGICJET_H

#ifndef LOGICJET_H
#define LOGICJET_H

class LogicJet{
private:
 
    int PosX;
    int PosY;
    int Width;
    int Height;
public:
    LogicJet();
   
    int getPosX();
    int getPosY();
    void setPosX(int x);
    void setPosY(int y);
    int getWidth();
    int getHeight();
};

#endif // LOGICJET_H

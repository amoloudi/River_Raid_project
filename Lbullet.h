#ifndef LBULLET_H
#define LBULLET_H

class LogicBullet{
private:
    int PosX;
    int PosY;
    int Width;
    int Height;
public:
    LogicBullet(int x, int y);
    int getPosX();
    int getPosY();
    void setPosX(int x);
    void setPosY(int y);
    int getWidth();
    int getHeight();
};

#endif // LBULLET_H

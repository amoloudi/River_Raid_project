#ifndef LENEMYSHIP_H
#define LENEMYSHIP_H

class LogicEnemyShip{
    private:
        int PosX;
        int PosY;
        int Width;
        int Height;
    public:
        LogicEnemyShip();
        int getPosX();
        int getPosY();
        void setPosX(int x);
        void setPosY(int y);
        int getWidth();
        int getHeight();
};

#endif // LENEMYSHIP_H

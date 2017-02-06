#ifndef LENEMYJET_H
#define LENEMYJET_H

class LogicEnemyJet{
    private:
        int PosX;
        int PosY;
        int Width;
        int Height;
        int Direction;
    public:
        LogicEnemyJet();
        int getDirection();
        int getPosX();
        int getPosY();
        void setPosX(int x);
        void setPosY(int y);
        int getWidth();
        int getHeight();
};

#endif // LENEMYJET_H

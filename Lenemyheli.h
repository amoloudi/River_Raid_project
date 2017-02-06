#ifndef LENEMYHELI_H
#define LENEMYHELI_H

class LogicEnemyHeli{
    private:
        int PosX;
        int PosY;
        int Width;
        int Height;
    public:
        LogicEnemyHeli();
        int getPosX();
        int getPosY();
        void setPosX(int x);
        void setPosY(int y);
        int getWidth();
        int getHeight();
};

#endif // LENEMYHELi_H

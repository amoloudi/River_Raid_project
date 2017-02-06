#ifndef LFUELDEPOT_H
#define LFUELDEPOT_H

class LogicFuelDepot{
    private:
        int PosX;
        int PosY;
        int Width;
        int Height;
    public:
        LogicFuelDepot();
        int getPosX();
        int getPosY();
        void setPosX(int x);
        void setPosY(int y);
        int getWidth();
        int getHeight();
};

#endif // LFUELDEPOT_H

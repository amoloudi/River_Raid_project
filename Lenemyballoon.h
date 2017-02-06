#ifndef LENEMYBALLOON_H
#define LENEMYBALLOON_H

class LogicEnemyBalloon{
    private:
        int PosX;
        int PosY;
        int Width;
        int Height;
    public:
        LogicEnemyBalloon();
        int getPosX();
        int getPosY();
        void setPosX(int x);
        void setPosY(int y);
        int getWidth();
        int getHeight();
};

#endif // LENEMYBALLOON_H

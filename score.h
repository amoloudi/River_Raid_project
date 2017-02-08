#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>

class Score: public QGraphicsTextItem{
public:
    Score();
    void IncreaseBalloon();
    void IncreaseHeli();
    void IncreaseJet();
    void IncreaseShip();
    void IncreaseFuelDepot();
};

#endif // SCORE_H

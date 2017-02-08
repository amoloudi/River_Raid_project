#include "fuel.h"
#include "globals.h"
#include <QFont>

Fuel::Fuel()
{
    // draw the fuel text
    setPlainText(QString("Fuel: ") + QString::number(GJet->getFuel()));
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",14));
}

void Fuel::update()
{
    // update text
    setPlainText(QString("Fuel: ") + QString::number(GJet->getFuel()));
}

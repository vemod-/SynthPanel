#include "qsynthpanel.h"
#include <QPainter>
#include "cresourceinitializer.h"

QSynthPanel::QSynthPanel(QWidget *parent) :
    QFrame(parent)
{
    CResourceInitializer::initializeResources();
    setStyleSheet("QSynthPanel{background-image: url(:/Brushed Aluminium Tile.bmp);border:1px solid #AAAAAA;border-style:outset;border-radius:8px;}");
}

QSynthPanel::~QSynthPanel()
{
}

/*
void QSynthPanel::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.setPen(Qt::NoPen);
    p.setBrush(QBrush(QImage(":/Brushed Aluminium Tile.bmp")));
    p.drawRoundedRect(rect(),8,8);
}
*/

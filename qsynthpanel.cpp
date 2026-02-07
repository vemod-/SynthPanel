#include "qsynthpanel.h"
#include <QPainter>
#include "cresourceinitializer.h"
#include "qdprpixmap.h"
#include <QStyleOption>

QSynthPanel::QSynthPanel(QWidget *parent) :
    QFrame(parent)
{
    CResourceInitializer::initializeResources();
    //setStyleSheet("QSynthPanel{background-image: url(:/Brushed Aluminium Tile.bmp);border:1px solid #AAAAAA;border-style:outset;border-radius:8px;}");
    setStyleSheet("QSynthPanel{border:1px solid #AAAAAA;border-style:outset;border-radius:8px;}");
}

QSynthPanel::~QSynthPanel()
{
}

void QSynthPanel::paintEvent(QPaintEvent *e)
{
    static QDPRPixmap bgPix(":/Brushed Aluminium Tile.bmp");
    QPainter p(this);
    p.setRenderHints(QPainter::SmoothPixmapTransform | QPainter::Antialiasing | QPainter::TextAntialiasing);
    p.setPen(Qt::NoPen);
    p.setBrush(QBrush(bgPix));
    p.drawRect(rect());
    QStyleOption opt;
    opt.initFrom(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QFrame::paintEvent(e);
}

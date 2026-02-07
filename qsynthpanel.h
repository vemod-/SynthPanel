#ifndef QSYNTHPANEL_H
#define QSYNTHPANEL_H

#include <QFrame>

class QSynthPanel : public QFrame
{
    Q_OBJECT
public:
    explicit QSynthPanel(QWidget *parent = 0);
    ~QSynthPanel();
protected:
    void paintEvent(QPaintEvent *e);
};

#endif // QSYNTHPANEL_H

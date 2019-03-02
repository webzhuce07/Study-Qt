#ifndef __drawer_h__
#define __drawer_h__

#include <QToolBox>

class QToolButton;
class Drawer : public QToolBox
{
    Q_OBJECT
public:
    Drawer(QWidget* parent = Q_NULLPTR);

private:
    QToolButton* toolBtn1_1;
    QToolButton* toolBtn1_2;
    QToolButton* toolBtn2_1;
    QToolButton* toolBtn2_2;
    QToolButton* toolBtn3_1;
    QToolButton* toolBtn3_2;
};
#endif


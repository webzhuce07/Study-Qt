#include "drawer.h"
#include <QToolButton>
#include <QGroupBox>
#include <QVBoxLayout>

Drawer::Drawer(QWidget* parent)
    :QToolBox(parent)
{
    toolBtn1_1 = new QToolButton;
    toolBtn1_1->setText(tr("Jack"));
    toolBtn1_1->setIcon(QPixmap("E:/github/Qt5/CH4/CH402/MyQQExample/11.jpg"));
    toolBtn1_1->setIconSize(QPixmap(":/picture/11.jpg").size());
    toolBtn1_1->setAutoRaise(true);
    toolBtn1_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn1_2 = new QToolButton;
    toolBtn1_2->setText(tr("Pony"));
    toolBtn1_2->setIcon(QPixmap(":/picture/12.jpg"));
    toolBtn1_2->setIconSize(QPixmap(":/picture/12.jpg").size());
    toolBtn1_2->setAutoRaise(true);
    toolBtn1_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    QGroupBox *groupBox1 = new QGroupBox;
    QVBoxLayout *layout1 = new QVBoxLayout(groupBox1);
    layout1->setContentsMargins(10, 10, 10, 10);
    layout1->setAlignment(Qt::AlignHCenter);
    layout1->addWidget(toolBtn1_1);
    layout1->addWidget(toolBtn1_2);
    layout1->addStretch();

    toolBtn2_1 = new QToolButton;
    toolBtn2_1->setText(tr("Mark Elliot Zuckerberg"));
    toolBtn2_1->setIcon(QPixmap(":/picture/21.jpg"));
    toolBtn2_1->setIconSize(QPixmap(":/picture/21.jpg").size());
    toolBtn2_1->setAutoRaise(true);
    toolBtn2_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn2_2 =new QToolButton;
    toolBtn2_2->setText(tr("Jeff Bezos"));
    toolBtn2_2->setIcon(QPixmap(":/picture/22.jpg"));
    toolBtn2_2->setIconSize(QPixmap(":/picture/22.jpg").size());
    toolBtn2_2->setAutoRaise(true);
    toolBtn2_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    QGroupBox *groupBox2=new QGroupBox;
    QVBoxLayout *layout2=new QVBoxLayout(groupBox2);
    layout2->setMargin(10);
    layout2->setAlignment(Qt::AlignHCenter);
    layout2->addWidget(toolBtn2_1);
    layout2->addWidget(toolBtn2_2);

    toolBtn3_1 =new QToolButton;
    toolBtn3_1->setText(tr("Donald John Trump"));
    toolBtn3_1->setIcon(QPixmap(":/picture/31.jpg"));
    toolBtn3_1->setIconSize(QPixmap(":/picture/31.jpg").size());
    toolBtn3_1->setAutoRaise(true);
    toolBtn3_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    toolBtn3_2 =new QToolButton;
    toolBtn3_2->setText(tr("Barack Hussein Obama"));
    toolBtn3_2->setIcon(QPixmap(":/picture/32.jpg"));
    toolBtn3_2->setIconSize(QPixmap(":/picture/32.jpg").size());
    toolBtn3_2->setAutoRaise(true);
    toolBtn3_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    QGroupBox *groupBox3=new QGroupBox;
    QVBoxLayout *layout3=new QVBoxLayout(groupBox3);
    layout3->setMargin(10);
    layout3->setAlignment(Qt::AlignHCenter);
    layout3->addWidget(toolBtn3_1);
    layout3->addWidget(toolBtn3_2);

    addItem((QWidget*)groupBox1, tr("My Friends"));
    addItem((QWidget*)groupBox2, tr("Strangers"));
    addItem((QWidget*)groupBox3, tr("Blacklist"));

}

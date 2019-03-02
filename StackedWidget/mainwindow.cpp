#include "mainwindow.h"
#include <QBoxLayout>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("StackedWidget"));
    QWidget* central_widget = new QWidget;
    setCentralWidget(central_widget);

    list = new QListWidget;
    list->insertItem(0,tr("Window1"));
    list->insertItem(1,tr("Window2"));
    list->insertItem(2,tr("Window3"));

    label1 = new QLabel(tr("WindowTest1"));
    label2 = new QLabel(tr("WindowTest2"));
    label3 = new QLabel(tr("WindowTest3"));

    stack =new QStackedWidget;
    stack->addWidget(label1);
    stack->addWidget(label2);
    stack->addWidget(label3);
    QHBoxLayout* main_layout =new QHBoxLayout;
    main_layout->setContentsMargins(5, 5, 5, 5);
    main_layout->setSpacing(5);
    main_layout->addWidget(list);
    main_layout->addWidget(stack, 0, Qt::AlignHCenter);
    main_layout->setStretchFactor(list,1);
    main_layout->setStretchFactor(stack,3);
    central_widget->setLayout(main_layout);
    connect(list, SIGNAL(currentRowChanged(int)), stack, SLOT(setCurrentIndex(int)));
}

MainWindow::~MainWindow()
{
    
}

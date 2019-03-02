#include "mainwindow.h"
#include <QTextEdit>
#include <QDockWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("DockWidget"));
    QTextEdit* central_widget = new QTextEdit(this);
    central_widget->setText(tr("Main Window"));
    central_widget->setAlignment(Qt::AlignCenter);
    setCentralWidget(central_widget);
    //DockWidget1
    QDockWidget* dock=new QDockWidget(tr("DockWidget1"), this);
    dock->setFeatures(QDockWidget::DockWidgetMovable);            //movable
    dock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    QTextEdit* te1 =new QTextEdit();
    te1->setText(tr("Window1,The dock widget can be moved between docks by the user" ""));
    dock->setWidget(te1);
    addDockWidget(Qt::RightDockWidgetArea, dock);
    //DockWidget2
    dock=new QDockWidget(tr("DockWidget2"),this);
    dock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable); //closable and floatable
    QTextEdit* te2 =new QTextEdit();
    te2->setText(tr("Window2,The dock widget can be detached from the main window,""and floated as an independent window, and can be closed"));
    dock->setWidget(te2);
    addDockWidget(Qt::RightDockWidgetArea, dock);
    //DockWidget3
    dock=new QDockWidget(tr("DockWidget3"), this);
    dock->setFeatures(QDockWidget::AllDockWidgetFeatures);     //all features
    QTextEdit* te3 =new QTextEdit();
    te3->setText(tr("Window3,The dock widget can be closed, moved, and floated"));
    dock->setWidget(te3);
    addDockWidget(Qt::RightDockWidgetArea,dock);
}

MainWindow::~MainWindow()
{   
}

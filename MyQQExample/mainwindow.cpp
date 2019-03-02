#include "mainwindow.h"
#include "drawer.h"

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent)
{
     setWindowTitle(tr("My QQ"));
     Drawer* drawer = new Drawer;
     setCentralWidget(drawer);
}

MainWindow::~MainWindow()
{   
}

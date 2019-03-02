#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT   
public:
    MainWindow(QWidget*parent = Q_NULLPTR);
    ~MainWindow();
};

#endif // MAINWINDOW_H

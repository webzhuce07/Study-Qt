#ifndef __mainwindow_h__
#define __mainwindow_h__

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT  
public:
    MainWindow(QWidget* parent = Q_NULLPTR);
    ~MainWindow();
};
#endif

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QListWidget;
class QStackedWidget;
class QLabel;
class MainWindow : public QMainWindow
{
    Q_OBJECT   
public:
    MainWindow(QWidget* parent = Q_NULLPTR);
    ~MainWindow();

private:
    QListWidget* list;
    QStackedWidget* stack;
    QLabel* label1;
    QLabel* label2;
    QLabel* label3;

};
#endif // MAINWINDOW_H

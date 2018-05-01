#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QMouseEvent;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    bool nativeEvent(const QByteArray &eventType, void *message, long *result);
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    QPoint last_mouse_position_;
};

#endif // MAINWINDOW_H

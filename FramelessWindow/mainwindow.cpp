#include "mainwindow.h"
#include <QMouseEvent>
#ifdef Q_OS_WIN
    #include <qt_windows.h>
    #include <Windowsx.h>
#endif

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent, Qt::FramelessWindowHint | windowFlags())
{
    setMinimumSize(300, 200);
}

MainWindow::~MainWindow()
{

}

bool MainWindow::nativeEvent(const QByteArray &eventType, void *message, long *result)
{
    int m_nBorder = 5;
    Q_UNUSED(eventType)
    MSG *param = static_cast<MSG *>(message);

    switch (param->message)
    {
        case WM_NCHITTEST:
        {
            int nX = GET_X_LPARAM(param->lParam) - this->geometry().x();
            int nY = GET_Y_LPARAM(param->lParam) - this->geometry().y();

            //// if mouse in the child Qwidget of mainfrme, we should not handle it
            //if (childAt(nX, nY) != NULL)
            //	return QWidget::nativeEvent(eventType, message, result);

            *result = HTCAPTION;

            // if mouse in the border of mainframe,we zoom mainframe
            if ((nX > 0) && (nX < m_nBorder))
                *result = HTLEFT;

            if ((nX > this->width() - m_nBorder) && (nX < this->width()))
                *result = HTRIGHT;

            if ((nY > 0) && (nY < m_nBorder))
                *result = HTTOP;

            if ((nY > this->height() - m_nBorder) && (nY < this->height()))
                *result = HTBOTTOM;

            if ((nX > 0) && (nX < m_nBorder) && (nY > 0)
                && (nY < m_nBorder))
                *result = HTTOPLEFT;

            if ((nX > this->width() - m_nBorder) && (nX < this->width())
                && (nY > 0) && (nY < m_nBorder))
                *result = HTTOPRIGHT;

            if ((nX > 0) && (nX < m_nBorder)
                && (nY > this->height() - m_nBorder) && (nY < this->height()))
                *result = HTBOTTOMLEFT;

            if ((nX > this->width() - m_nBorder) && (nX < this->width())
                && (nY > this->height() - m_nBorder) && (nY < this->height()))
                *result = HTBOTTOMRIGHT;

            if (*result == HTCAPTION)
            {
                return false;
            }
            return true;
        }
    }
    return QMainWindow::nativeEvent(eventType, message, result);
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
        last_mouse_position_ = event->globalPos();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (!event->buttons().testFlag(Qt::LeftButton))
            return;
    const QPoint position = pos() + event->globalPos() - last_mouse_position_; //the position of mainfrmae + (current_mouse_position - last_mouse_position)
    move(position.x(), position.y());
    last_mouse_position_ = event->globalPos();
}

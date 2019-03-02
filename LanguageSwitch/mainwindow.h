#ifndef __mainwindow_h__
#define __mainwindow_h__

#include <QMainWindow>

class QComboBox;
class QLabel;
class MainWindow : public QMainWindow
{
    Q_OBJECT   
public:
    MainWindow(QWidget* parent = Q_NULLPTR);
    ~MainWindow();
private slots:
    void changeLanguage(int index);

private:
    void createControls();
    void changeTr(const QString& language_code);
    void refreshLabel();

    QComboBox* combo;
    QLabel* label;
};

#endif

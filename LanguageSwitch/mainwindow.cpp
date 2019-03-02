#include "mainwindow.h"
#include <QVBoxLayout>
#include <QTranslator>
#include <QComboBox>
#include <QLabel>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    createControls();
}

MainWindow::~MainWindow()
{    
}

void MainWindow::createControls()
{
    combo = new QComboBox;
    combo->addItem("English", "en");
    combo->addItem("Chinese", "zh");
    combo->addItem("Latin", "la");
    label = new QLabel;
    refreshLabel();
    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(combo, 1);
    layout->addWidget(label, 5);
    setLayout(layout);
    connect(combo, SIGNAL(currentIndexChanged(int)),this,SLOT(changeLanguage(int)));
}

void MainWindow::refreshLabel()
{
    label->setText(tr("TXT_HELLO_WORLD", "Hello World"));
}

void MainWindow::changeLanguage(int index)
{
    QString langCode = combo->itemData(index).toString();
    changeTr(langCode);
    refreshLabel();
}

void MainWindow::changeTr(const QString& language_code)
{
    static QTranslator* translator;

    if (translator != NULL)
    {
        qApp->removeTranslator(translator);
        delete translator;
        translator = NULL;
    }
    translator = new QTranslator;
    QString qmFilename = "lang_" + langCode;
    if (translator->load(QString("D:/Qt/CH14/CH1402/LangSwitch/")+qmFilename))
    {
        qApp->installTranslator(translator);
    }
}

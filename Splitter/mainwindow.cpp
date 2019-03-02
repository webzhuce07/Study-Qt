#include "mainwindow.h"
#include <Qsplitter>
#include <QTextEdit>
#include <QTextCodec>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Splitter"));
    //main splitter
    QSplitter* main_splitter = new QSplitter(Qt::Horizontal,0);
    setCentralWidget(main_splitter);
    main_splitter->setStretchFactor(1,1);
    QTextEdit* left_text = new QTextEdit(tr("Left Widget"), main_splitter);
    left_text->setAlignment(Qt::AlignCenter);
    //left splitter
    QSplitter* right_splitter = new QSplitter(Qt::Vertical, main_splitter);
    right_splitter->setOpaqueResize(false);
    QTextEdit* top_text =new QTextEdit(QObject::tr("Top Widget"), right_splitter);
    top_text->setAlignment(Qt::AlignCenter);
    QTextEdit* bottom_text =new QTextEdit(QObject::tr("Bottom Widget"), right_splitter);
    bottom_text->setAlignment(Qt::AlignCenter);
}

MainWindow::~MainWindow()
{
    
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->label_y->setAlignment(Qt::AlignCenter);

}

MainWindow::~MainWindow()
{
    delete ui;
}


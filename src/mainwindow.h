#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "CoreFunctionWidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initSetting();

    CoreFunctionWidget *new_win;


private slots:
    void on_actionNew_File_triggered();

    void on_actionOpen_File_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_refreshButton_clicked();

    void on_cancelButton_clicked();

    void on_applyButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

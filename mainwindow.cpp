#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->label_y->setAlignment(Qt::AlignCenter);
    initSetting();
}

void MainWindow::initSetting()
{
    QSettings *ConfigIni = new QSettings("/home/ushio/Coding/Practice/develop/build-SystemSetting-Desktop_Qt_5_15_2_GCC_64bit-Debug/settings/D80/scanner.ini",QSettings::IniFormat);

    //crystal
    ui->doubleSpinBox->setValue(ConfigIni->value("/scanner_PET/crystal_size_X").toDouble());
    ui->doubleSpinBox_2->setValue(ConfigIni->value("/scanner_PET/crystal_size_Y").toDouble());
    ui->doubleSpinBox_3->setValue(ConfigIni->value("/scanner_PET/crystal_size_Z").toDouble());

    ui->doubleSpinBox_4->setValue(ConfigIni->value("/scanner_PET/crystal_pitch_X").toDouble());
    ui->doubleSpinBox_5->setValue(ConfigIni->value("/scanner_PET/crystal_pitch_Y").toDouble());
    ui->doubleSpinBox_6->setValue(ConfigIni->value("/scanner_PET/crystal_pitch_Z").toDouble());

    ui->spinBox_7->setValue(ConfigIni->value("/scanner_PET/crystal_num_X").toInt());
    ui->spinBox_8->setValue(ConfigIni->value("/scanner_PET/crystal_num_Y").toInt());
    ui->spinBox_9->setValue(ConfigIni->value("/scanner_PET/crystal_num_Z").toInt());

    //block
    ui->doubleSpinBox_10->setValue(ConfigIni->value("/scanner_PET/block_size_X").toDouble());
    ui->doubleSpinBox_11->setValue(ConfigIni->value("/scanner_PET/block_size_Y").toDouble());
    ui->doubleSpinBox_12->setValue(ConfigIni->value("/scanner_PET/block_size_Z").toDouble());

    ui->doubleSpinBox_13->setValue(ConfigIni->value("/scanner_PET/block_pitch_X").toDouble());
    ui->doubleSpinBox_14->setValue(ConfigIni->value("/scanner_PET/block_pitch_Y").toDouble());
    ui->doubleSpinBox_15->setValue(ConfigIni->value("/scanner_PET/block_pitch_Z").toDouble());

    ui->spinBox_16->setValue(ConfigIni->value("/scanner_PET/block_num_X").toInt());
    ui->spinBox_17->setValue(ConfigIni->value("/scanner_PET/block_num_Y").toInt());
    ui->spinBox_18->setValue(ConfigIni->value("/scanner_PET/block_num_Z").toInt());

    //module
    ui->doubleSpinBox_19->setValue(ConfigIni->value("/scanner_PET/module_size_X").toDouble());
    ui->doubleSpinBox_20->setValue(ConfigIni->value("/scanner_PET/module_size_Y").toDouble());
    ui->doubleSpinBox_21->setValue(ConfigIni->value("/scanner_PET/module_size_Z").toDouble());

    ui->doubleSpinBox_22->setValue(ConfigIni->value("/scanner_PET/module_pitch_X").toDouble());
    ui->doubleSpinBox_23->setValue(ConfigIni->value("/scanner_PET/module_pitch_Y").toDouble());
    ui->doubleSpinBox_24->setValue(ConfigIni->value("/scanner_PET/module_pitch_Z").toDouble());

    ui->spinBox_25->setValue(ConfigIni->value("/scanner_PET/module_num_X").toInt());
    ui->spinBox_26->setValue(ConfigIni->value("/scanner_PET/module_num_Y").toInt());
    ui->spinBox_27->setValue(ConfigIni->value("/scanner_PET/module_num_Z").toInt());

    //panel
    ui->doubleSpinBox_28->setValue(ConfigIni->value("/scanner_PET/panel_size_X").toDouble());
    ui->doubleSpinBox_29->setValue(ConfigIni->value("/scanner_PET/panel_size_Y").toDouble());
    ui->doubleSpinBox_30->setValue(ConfigIni->value("/scanner_PET/panel_size_Z").toDouble());

    ui->doubleSpinBox_31->setValue(ConfigIni->value("/scanner_PET/panel_pitch_X").toDouble());
    ui->doubleSpinBox_32->setValue(ConfigIni->value("/scanner_PET/panel_pitch_Y").toDouble());
    ui->doubleSpinBox_33->setValue(ConfigIni->value("/scanner_PET/panel_pitch_Z").toDouble());

    ui->spinBox_34->setValue(ConfigIni->value("/scanner_PET/panel_num").toInt());
    ui->spinBox_35->setValue(ConfigIni->value("/scanner_PET/crystal_offset").toInt());
    ui->spinBox_36->setValue(ConfigIni->value("/scanner_PET/position_size").toInt());
    ui->doubleSpinBox_37->setValue(ConfigIni->value("/scanner_PET/scanner_radius").toDouble());

    delete ConfigIni;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_File_triggered()
{

}

void MainWindow::on_actionOpen_File_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "选择文件", "./");

//    ui->file_lineEdit->setText(fileName);
}

void MainWindow::on_actionSave_triggered()
{
    QSettings *ConfigIni = new QSettings("/home/ushio/Coding/Practice/develop/build-SystemSetting-Desktop_Qt_5_15_2_GCC_64bit-Debug/settings/D80/scanner.ini",QSettings::IniFormat);
//    ConfigIni->setValue("/config/node1",ui->lineEdit->text());

    //crystal  save
    ConfigIni->setValue("/scanner_PET/crystal_size_X", ui->doubleSpinBox->value());
    ConfigIni->setValue("/scanner_PET/crystal_size_Y", ui->doubleSpinBox_2->value());
    ConfigIni->setValue("/scanner_PET/crystal_size_Z", ui->doubleSpinBox_3->value());

    ConfigIni->setValue("/scanner_PET/crystal_pitch_X", ui->doubleSpinBox_4->value());
    ConfigIni->setValue("/scanner_PET/crystal_pitch_Y", ui->doubleSpinBox_5->value());
    ConfigIni->setValue("/scanner_PET/crystal_pitch_Z", ui->doubleSpinBox_6->value());

    ConfigIni->setValue("/scanner_PET/crystal_num_X", ui->spinBox_7->value());
    ConfigIni->setValue("/scanner_PET/crystal_num_Y", ui->spinBox_8->value());
    ConfigIni->setValue("/scanner_PET/crystal_num_Z", ui->spinBox_9->value());

    //block  save
    ConfigIni->setValue("/scanner_PET/block_size_X", ui->doubleSpinBox_10->value());
    ConfigIni->setValue("/scanner_PET/block_size_Y", ui->doubleSpinBox_11->value());
    ConfigIni->setValue("/scanner_PET/block_size_Z", ui->doubleSpinBox_12->value());

    ConfigIni->setValue("/scanner_PET/block_pitch_X", ui->doubleSpinBox_13->value());
    ConfigIni->setValue("/scanner_PET/block_pitch_Y", ui->doubleSpinBox_14->value());
    ConfigIni->setValue("/scanner_PET/block_pitch_Z", ui->doubleSpinBox_15->value());

    ConfigIni->setValue("/scanner_PET/block_num_X", ui->spinBox_16->value());
    ConfigIni->setValue("/scanner_PET/block_num_Y", ui->spinBox_17->value());
    ConfigIni->setValue("/scanner_PET/block_num_Z", ui->spinBox_18->value());

    //module  save
    ConfigIni->setValue("/scanner_PET/module_size_X", ui->doubleSpinBox_19->value());
    ConfigIni->setValue("/scanner_PET/module_size_Y", ui->doubleSpinBox_20->value());
    ConfigIni->setValue("/scanner_PET/module_size_Z", ui->doubleSpinBox_21->value());

    ConfigIni->setValue("/scanner_PET/module_pitch_X", ui->doubleSpinBox_22->value());
    ConfigIni->setValue("/scanner_PET/module_pitch_Y", ui->doubleSpinBox_23->value());
    ConfigIni->setValue("/scanner_PET/module_pitch_Z", ui->doubleSpinBox_24->value());

    ConfigIni->setValue("/scanner_PET/module_num_X", ui->spinBox_25->value());
    ConfigIni->setValue("/scanner_PET/module_num_Y", ui->spinBox_26->value());
    ConfigIni->setValue("/scanner_PET/module_num_Z", ui->spinBox_27->value());

    //panel save
    ConfigIni->setValue("/scanner_PET/panel_size_X", ui->doubleSpinBox_28->value());
    ConfigIni->setValue("/scanner_PET/panel_size_Y", ui->doubleSpinBox_29->value());
    ConfigIni->setValue("/scanner_PET/panel_size_Z", ui->doubleSpinBox_30->value());

    ConfigIni->setValue("/scanner_PET/panel_pitch_X", ui->doubleSpinBox_31->value());
    ConfigIni->setValue("/scanner_PET/panel_pitch_Y", ui->doubleSpinBox_32->value());
    ConfigIni->setValue("/scanner_PET/panel_pitch_Z", ui->doubleSpinBox_33->value());

    ConfigIni->setValue("/scanner_PET/panel_num", ui->spinBox_34->value());
    ConfigIni->setValue("/scanner_PET/crystal_offset", ui->spinBox_35->value());
    ConfigIni->setValue("/scanner_PET/position_size", ui->spinBox_36->value());
    ConfigIni->setValue("/scanner_PET/scanner_radius", ui->doubleSpinBox_37->value());

    delete ConfigIni;
}

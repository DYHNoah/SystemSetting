#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>


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

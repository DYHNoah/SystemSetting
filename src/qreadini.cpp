#include "qreadini.h"

qreadini::qreadini()
{
    this->readIni();
}

void qreadini::readIni()
{
    QSettings *configIniRead = new QSettings("/home/ushio/桌面/Project/scanner.ini", QSettings::IniFormat);  //初始化读取ini文件
    //crystal
    iniConfig.crystal_num_X = configIniRead->value("scanner_PET/crystal_num_X").toInt();
    iniConfig.crystal_num_Y = configIniRead->value("scanner_PET/crystal_num_Y").toInt();
    iniConfig.crystal_num_Z = configIniRead->value("scanner_PET/crystal_num_Z").toInt();

    iniConfig.crystal_size_X = configIniRead->value("scanner_PET/crystal_size_X").toDouble();
    iniConfig.crystal_size_Y = configIniRead->value("scanner_PET/crystal_size_Y").toDouble();
    iniConfig.crystal_size_Z = configIniRead->value("scanner_PET/crystal_size_Z").toDouble();

    iniConfig.crystal_pitch_X = configIniRead->value("scanner_PET/crystal_pitch_X").toDouble();
    iniConfig.crystal_pitch_Y = configIniRead->value("scanner_PET/crystal_pitch_Y").toDouble();
    iniConfig.crystal_pitch_Z = configIniRead->value("scanner_PET/crystal_pitch_Z").toDouble();

    //block
    iniConfig.block_num_X = configIniRead->value("scanner_PET/block_num_X").toInt();
    iniConfig.block_num_Y = configIniRead->value("scanner_PET/block_num_Y").toInt();
    iniConfig.block_num_Z = configIniRead->value("scanner_PET/block_num_Z").toInt();

    iniConfig.block_size_X = configIniRead->value("scanner_PET/block_size_X").toDouble();
    iniConfig.block_size_Y = configIniRead->value("scanner_PET/block_size_Y").toDouble();
    iniConfig.block_size_Z = configIniRead->value("scanner_PET/block_size_Z").toDouble();

    iniConfig.block_pitch_X = configIniRead->value("scanner_PET/block_pitch_X").toDouble();
    iniConfig.block_pitch_Y = configIniRead->value("scanner_PET/block_pitch_Y").toDouble();
    iniConfig.block_pitch_Z = configIniRead->value("scanner_PET/block_pitch_Z").toDouble();

    //module
    iniConfig.module_num_X = configIniRead->value("scanner_PET/module_num_X").toInt();
    iniConfig.module_num_Y = configIniRead->value("scanner_PET/module_num_Y").toInt();
    iniConfig.module_num_Z = configIniRead->value("scanner_PET/module_num_Z").toInt();

    iniConfig.module_size_X = configIniRead->value("scanner_PET/module_size_X").toDouble();
    iniConfig.module_size_Y = configIniRead->value("scanner_PET/module_size_Y").toDouble();
    iniConfig.module_size_Z = configIniRead->value("scanner_PET/module_size_Z").toDouble();

    iniConfig.module_pitch_X = configIniRead->value("scanner_PET/module_pitch_X").toDouble();
    iniConfig.module_pitch_Y = configIniRead->value("scanner_PET/module_pitch_Y").toDouble();
    iniConfig.module_pitch_Z = configIniRead->value("scanner_PET/module_pitch_Z").toDouble();

    //panel
    iniConfig.panel_num = configIniRead->value("scanner_PET/panel_num").toInt();

    iniConfig.panel_size_X = configIniRead->value("scanner_PET/panel_size_X").toDouble();
    iniConfig.panel_size_Y = configIniRead->value("scanner_PET/panel_size_Y").toDouble();
    iniConfig.panel_size_Z = configIniRead->value("scanner_PET/panel_size_Z").toDouble();

    iniConfig.panel_pitch_X = configIniRead->value("scanner_PET/panel_pitch_X").toDouble();
    iniConfig.panel_pitch_Y = configIniRead->value("scanner_PET/panel_pitch_Y").toDouble();
    iniConfig.panel_pitch_Z = configIniRead->value("scanner_PET/panel_pitch_Z").toDouble();

    iniConfig.crystal_offset = configIniRead->value("scanner_PET/crystal_offset").toInt();
    iniConfig.scanner_radius = configIniRead->value("scanner_PET/scanner_radius").toDouble();
    iniConfig.position_size = configIniRead->value("scanner_PET/position_size").toInt();

    delete configIniRead;
}

const IniConfig &qreadini::getIniConfig()
{
    return iniConfig;
}

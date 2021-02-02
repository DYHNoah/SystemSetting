#ifndef QREADINI_H
#define QREADINI_H

#include <QSettings>

#define DATACONFIG  QReadIni::getInstance()->getIniConfig()



typedef struct IniConfig
{
    int crystal_num_Y;
    int crystal_num_Z;
    int crystal_num_X;

    double crystal_size_X;
    double crystal_size_Y;
    double crystal_size_Z;

    double crystal_pitch_X;
    double crystal_pitch_Y;
    double crystal_pitch_Z;

    int block_num_X;
    int block_num_Y;
    int block_num_Z;

    double block_size_X;
    double block_size_Y;
    double block_size_Z;

    double block_pitch_X;
    double block_pitch_Y;
    double block_pitch_Z;

    int  module_num_X;
    int  module_num_Y;
    int  module_num_Z;

    double module_size_X;
    double module_size_Y;
    double module_size_Z;

    double module_pitch_X;
    double module_pitch_Y;
    double module_pitch_Z;

    int panel_num;

    double panel_size_X;
    double panel_size_Y;
    double panel_size_Z;

    double panel_pitch_X;
    double panel_pitch_Y;
    double panel_pitch_Z;


    int crystal_offset;
    double scanner_radius;
    int position_size;
}IniConfig;

class qreadini
{
public:
    static qreadini*getInstance();

    void readIni();

    const IniConfig &getIniConfig();

private:
    qreadini();

    IniConfig iniConfig;

    static qreadini*instance;
};

#endif // QREADINI_H

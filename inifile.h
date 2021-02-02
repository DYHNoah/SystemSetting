#ifndef INIFILE_H
#define INIFILE_H

#include <QSettings>


typedef struct IniConfig
{
    double crystal_size_X;
    double crystal_size_Y;
    double crystal_size_Z;

    double crystal_pitch_X;
    double crystal_pitch_Y;
    double crystal_pitch_Z;

    int crystal_num_Y;
    int crystal_num_Z;
    int crystal_num_X;


    double block_size_X;
    double block_size_Y;
    double block_size_Z;

    double block_pitch_X;
    double block_pitch_Y;
    double block_pitch_Z;

    int block_num_X;
    int block_num_Y;
    int block_num_Z;

    double module_size_X;
    double module_size_Y;
    double module_size_Z;

    double module_pitch_X;
    double module_pitch_Y;
    double module_pitch_Z;

    int  module_num_X;
    int  module_num_Y;
    int  module_num_Z;

    double panel_size_X;
    double panel_size_Y;
    double panel_size_Z;

    double panel_pitch_X;
    double panel_pitch_Y;
    double panel_pitch_Z;

    int panel_num;

    int crystal_offset;
    int position_size;
    double scanner_radius;
}IniConfig;


class inifile
{
public:
    static inifile *getInstance();
//    inifile();
    void readIni();

    const IniConfig &getIniConfig();

private:
    inifile();

    IniConfig iniConfig;

    static inifile *instance;

//    void iniScannerSetting();
    //scanner_PET

};

#endif // INIFILE_H

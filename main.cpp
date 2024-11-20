#include "CircleGridStereoCalibration.h"
#include <QApplication>
#include "Easylogger/logger.h"

int main(int argc, char** argv)
{
    Logger::instance();
    QApplication app(argc, argv);
    Ui_MainWindow ui_w;
    QMainWindow mw
    ui_w.setupUi(&mw);
    mw.show();
    return app.exec();
}

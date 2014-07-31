#include "mainwindow.h"
#include <QApplication>
#include <QDoubleValidator>

#include <usb.h>

#include "opendevice.h" /* common code moved to separate module */

#include "../firmware/usbconfig.h"  /* device's VID/PID and names */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

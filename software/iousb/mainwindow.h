#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDoubleValidator>
#include <usb.h>        /* this is libusb */
#include "opendevice.h" /* common code moved to separate module */

#include "../firmware/usbconfig.h"  /* device's VID/PID and names */

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void digital_dir_all(int dir_num);
    void digital_val_all(int val_num);
    void digital_enable_all(bool enable);
    void send_port();


private Q_SLOTS:
    void digital_dir_0();
    void digital_dir_1();
    void digital_dir_2();
    void digital_dir_3();

    void digital_val_0();
    void digital_val_1();
    void digital_val_2();
    void digital_val_3();

    void digital_check();
    void analogin_check();
    void analogout_check();

    void LEDon();
    void LEDoff();


};

#endif // MAINWINDOW_H

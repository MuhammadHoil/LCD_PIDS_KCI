#include "doorclose.h"
#include "ui_doorclose.h"

DoorClose::DoorClose(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DoorClose)
{
    ui->setupUi(this);
}

DoorClose::~DoorClose()
{
    delete ui;
}

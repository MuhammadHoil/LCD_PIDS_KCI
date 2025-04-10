#include "dooropen.h"
#include "ui_dooropen.h"

DoorOpen::DoorOpen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DoorOpen)
{
    ui->setupUi(this);
}

DoorOpen::~DoorOpen()
{
    delete ui;
}

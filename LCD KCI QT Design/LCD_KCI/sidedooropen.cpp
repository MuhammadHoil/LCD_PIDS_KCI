#include "sidedooropen.h"
#include "ui_sidedooropen.h"

SideDoorOpen::SideDoorOpen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SideDoorOpen)
{
    ui->setupUi(this);
}

SideDoorOpen::~SideDoorOpen()
{
    delete ui;
}

#include "sidenondooropen.h"
#include "ui_sidenondooropen.h"

SideNonDoorOpen::SideNonDoorOpen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SideNonDoorOpen)
{
    ui->setupUi(this);
}

SideNonDoorOpen::~SideNonDoorOpen()
{
    delete ui;
}

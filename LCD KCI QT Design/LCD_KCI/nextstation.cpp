#include "nextstation.h"
#include "ui_nextstation.h"

NextStation::NextStation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NextStation)
{
    ui->setupUi(this);
}

NextStation::~NextStation()
{
    delete ui;
}

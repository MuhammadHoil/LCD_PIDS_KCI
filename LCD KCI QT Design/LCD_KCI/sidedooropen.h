#ifndef SIDEDOOROPEN_H
#define SIDEDOOROPEN_H

#include <QMainWindow>

namespace Ui {
class SideDoorOpen;
}

class SideDoorOpen : public QMainWindow
{
    Q_OBJECT

public:
    explicit SideDoorOpen(QWidget *parent = nullptr);
    ~SideDoorOpen();

private:
    Ui::SideDoorOpen *ui;
};

#endif // SIDEDOOROPEN_H

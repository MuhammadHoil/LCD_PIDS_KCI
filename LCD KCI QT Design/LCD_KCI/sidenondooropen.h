#ifndef SIDENONDOOROPEN_H
#define SIDENONDOOROPEN_H

#include <QMainWindow>

namespace Ui {
class SideNonDoorOpen;
}

class SideNonDoorOpen : public QMainWindow
{
    Q_OBJECT

public:
    explicit SideNonDoorOpen(QWidget *parent = nullptr);
    ~SideNonDoorOpen();

private:
    Ui::SideNonDoorOpen *ui;
};

#endif // SIDENONDOOROPEN_H

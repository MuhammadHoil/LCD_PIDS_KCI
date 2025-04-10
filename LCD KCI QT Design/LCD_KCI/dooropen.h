#ifndef DOOROPEN_H
#define DOOROPEN_H

#include <QMainWindow>

namespace Ui {
class DoorOpen;
}

class DoorOpen : public QMainWindow
{
    Q_OBJECT

public:
    explicit DoorOpen(QWidget *parent = nullptr);
    ~DoorOpen();

private:
    Ui::DoorOpen *ui;
};

#endif // DOOROPEN_H

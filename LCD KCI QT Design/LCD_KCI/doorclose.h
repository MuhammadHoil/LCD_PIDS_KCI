#ifndef DOORCLOSE_H
#define DOORCLOSE_H

#include <QMainWindow>

namespace Ui {
class DoorClose;
}

class DoorClose : public QMainWindow
{
    Q_OBJECT

public:
    explicit DoorClose(QWidget *parent = nullptr);
    ~DoorClose();

private:
    Ui::DoorClose *ui;
};

#endif // DOORCLOSE_H

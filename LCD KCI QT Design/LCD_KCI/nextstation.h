#ifndef NEXTSTATION_H
#define NEXTSTATION_H

#include <QMainWindow>

namespace Ui {
class NextStation;
}

class NextStation : public QMainWindow
{
    Q_OBJECT

public:
    explicit NextStation(QWidget *parent = nullptr);
    ~NextStation();

private:
    Ui::NextStation *ui;
};

#endif // NEXTSTATION_H

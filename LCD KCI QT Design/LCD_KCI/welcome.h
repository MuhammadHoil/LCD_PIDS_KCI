#ifndef WELCOME_H
#define WELCOME_H

#include <QMainWindow>

namespace Ui {
class welcome;
}

class welcome : public QMainWindow
{
    Q_OBJECT

public:
    explicit welcome(QWidget *parent = nullptr);
    ~welcome();

private:
    Ui::welcome *ui;
};

#endif // WELCOME_H

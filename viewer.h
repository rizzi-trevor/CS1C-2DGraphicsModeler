#ifndef VIEWER_H
#define VIEWER_H

#include <QMainWindow>

namespace Ui {
class viewer;
}

class viewer : public QMainWindow
{
    Q_OBJECT

public:
    explicit viewer(QWidget *parent = nullptr);
    ~viewer();

private:
    Ui::viewer *ui;
};

#endif // VIEWER_H

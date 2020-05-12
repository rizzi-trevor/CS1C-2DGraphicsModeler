#ifndef CONTACTPAGE_H
#define CONTACTPAGE_H

#include <QDialog>
#include <fstream>

namespace Ui {
class contactPage;
}

class contactPage : public QDialog
{
    Q_OBJECT

public:
    explicit contactPage(QWidget *parent = nullptr);
    ~contactPage();

public slots:
    void onCancelClick();

    void onConfrimClick();

private:
    Ui::contactPage *ui;
};

#endif // CONTACTPAGE_H

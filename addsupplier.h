#ifndef ADDSUPPLIER_H
#define ADDSUPPLIER_H

#include <QDialog>

namespace Ui {
class AddSupplier;
}

class AddSupplier : public QDialog
{
    Q_OBJECT

public:
    explicit AddSupplier(QWidget *parent = nullptr);
    ~AddSupplier();

private slots:
    void on_btnSave_clicked();

    void on_btmReset_clicked();

private:
    Ui::AddSupplier *ui;
};

#endif // ADDSUPPLIER_H

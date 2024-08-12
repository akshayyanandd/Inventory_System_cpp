#ifndef FINDSUPPLIER_H
#define FINDSUPPLIER_H

#include <QDialog>
#include "databaseheader.h"
namespace Ui {
class FindSupplier;
}

class FindSupplier : public QDialog
{
    Q_OBJECT

public:
    explicit FindSupplier(QWidget *parent = nullptr);
    ~FindSupplier();

private slots:
    void on_btmFIndSupplier_clicked();

private:
    Ui::FindSupplier *ui;

    QSqlQueryModel *model;
};

#endif // FINDSUPPLIER_H

#include "findsupplier.h"
#include "ui_findsupplier.h"

FindSupplier::FindSupplier(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FindSupplier)
{
    ui->setupUi(this);
}

FindSupplier::~FindSupplier()
{
    delete ui;
}

#include "addsupplier.h"
#include "ui_addsupplier.h"

AddSupplier::AddSupplier(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddSupplier)
{
    ui->setupUi(this);
}

AddSupplier::~AddSupplier()
{
    delete ui;
}

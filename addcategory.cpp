#include "addcategory.h"
#include "ui_addcategory.h"

AddCategory::AddCategory(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddCategory)
{
    ui->setupUi(this);
}

AddCategory::~AddCategory()
{
    delete ui;
}

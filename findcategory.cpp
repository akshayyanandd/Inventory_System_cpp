#include "findcategory.h"
#include "ui_findcategory.h"

FindCategory::FindCategory(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FindCategory)
{
    ui->setupUi(this);
}

FindCategory::~FindCategory()
{
    delete ui;
}

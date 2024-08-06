#include "finditem.h"
#include "ui_finditem.h"

FindItem::FindItem(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FindItem)
{
    ui->setupUi(this);
}

FindItem::~FindItem()
{
    delete ui;
}

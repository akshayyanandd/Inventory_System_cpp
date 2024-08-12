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
    delete model;
}

void FindItem::on_btmFIndItem_clicked()
{
    QString ItemName=ui->txtItemName->text();

    QSqlDatabase database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/1 InventoryManag/1 Database/Inventory.db");
    if (!database.open()) {
        QMessageBox::critical(this, "Database Error", database.lastError().text());
        return;
    }

    if(model==nullptr){
        model=new QSqlQueryModel(this);
    }
    QSqlQuery query(database);
    query.prepare("select * from Items where Name like '%" + ItemName + "%'");
    query.exec();
    model->setQuery(query);
    if(model->rowCount()==0){
        QMessageBox::information(this, "Not Found", "No items found matching the search criteria.");

    }
    else
    ui->tableView->setModel(model);
    database.close();
}


#include "additem.h"
#include "ui_additem.h"
AddItem::AddItem(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddItem)
{
    ui->setupUi(this);
}

AddItem::~AddItem()
{
    delete ui;
}

void AddItem::on_btnSave_clicked()
{
    QString ItemName=ui->txtItemName->text();
    QString Quantity=ui->txtQuantity->text();
    QString Price=ui->txtPrice->text();
    QString SupplierID=ui->txtSupplierID->text();

    QSqlDatabase database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/1 InventoryManag/1 Database/Inventory.db");
    if (!database.open()) {
        QMessageBox::critical(this, "Database Error", database.lastError().text());
        return;
    }
    QSqlQuery query;
    query=QSqlQuery(database);
    query.prepare("INSERT INTO Items (Name, Quantity, Price, SupplierID) VALUES ('" + ItemName +"','" + Quantity +"','" + Price +"','" + SupplierID +"')");

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Item added successfully.");
    } else {
        QMessageBox::critical(this, "Error", "Failed to add item: " + query.lastError().text());
    }

    database.close();
}


void AddItem::on_btnReset_clicked()
{
    ui->txtItemName->clear();
    ui->txtPrice->clear();
    ui->txtQuantity->clear();
    ui->txtSupplierID->clear();
}


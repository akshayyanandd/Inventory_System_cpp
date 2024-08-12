#include "addsupplier.h"
#include "ui_addsupplier.h"
#include "databaseheader.h"
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

void AddSupplier::on_btnSave_clicked()
{
    QString SupplierName=ui->txtSupplierName->text();
    QString SupplierContact=ui->txtSupplierContact->toPlainText();

    QSqlDatabase database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/1 InventoryManag/1 Database/Inventory.db");
    if (!database.open()) {
        QMessageBox::critical(this, "Database Error", database.lastError().text());
        return;
    }
    QSqlQuery query;
    query=QSqlQuery(database);
    query.prepare("INSERT INTO Suppliers (Name, ContactInfo) VALUES ('" + SupplierName +"','" + SupplierContact +"')");

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Item added successfully.");
    } else {
        QMessageBox::critical(this, "Error", "Failed to add item: " + query.lastError().text());
    }

    database.close();

}


void AddSupplier::on_btmReset_clicked()
{
    ui->txtSupplierName->clear();
    ui->txtSupplierContact->clear();
}


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
    delete model;
}

void FindSupplier::on_btmFIndSupplier_clicked()
{
    QString SupplierName=ui->txtSupplierName->text();

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
    query.prepare("select * from Suppliers where Name like '%" + SupplierName + "%'");
    query.exec();
    model->setQuery(query);
    if(model->rowCount()==0){
        QMessageBox::information(this, "Not Found", "No items found matching the search criteria.");

    }
    else
        ui->tableView->setModel(model);
    database.close();
}


#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrAddItem=new AddItem();
    ptrAddSupplier=new AddSupplier();
    ptrFindItem=new FindItem();
    ptrFindSupplier =new FindSupplier();
}

MainWindow::~MainWindow()
{

    delete ptrAddItem;
    delete ptrAddSupplier;
    delete ptrFindItem;
    delete ptrFindSupplier;
delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ptrAddItem->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    ptrAddSupplier->show();
}



void MainWindow::on_pushButton_4_clicked()
{
    ptrFindItem->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    ptrFindSupplier->show();
}

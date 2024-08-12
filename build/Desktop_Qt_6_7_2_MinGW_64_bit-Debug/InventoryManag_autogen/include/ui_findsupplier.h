/********************************************************************************
** Form generated from reading UI file 'findsupplier.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDSUPPLIER_H
#define UI_FINDSUPPLIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindSupplier
{
public:
    QLineEdit *txtSupplierName;
    QPushButton *btmFIndSupplier;
    QLabel *label;
    QTableView *tableView;

    void setupUi(QDialog *FindSupplier)
    {
        if (FindSupplier->objectName().isEmpty())
            FindSupplier->setObjectName("FindSupplier");
        FindSupplier->resize(400, 300);
        txtSupplierName = new QLineEdit(FindSupplier);
        txtSupplierName->setObjectName("txtSupplierName");
        txtSupplierName->setGeometry(QRect(120, 30, 161, 28));
        btmFIndSupplier = new QPushButton(FindSupplier);
        btmFIndSupplier->setObjectName("btmFIndSupplier");
        btmFIndSupplier->setGeometry(QRect(290, 30, 101, 29));
        label = new QLabel(FindSupplier);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 101, 20));
        tableView = new QTableView(FindSupplier);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(60, 90, 256, 192));

        retranslateUi(FindSupplier);

        QMetaObject::connectSlotsByName(FindSupplier);
    } // setupUi

    void retranslateUi(QDialog *FindSupplier)
    {
        FindSupplier->setWindowTitle(QCoreApplication::translate("FindSupplier", "FInd Supplier", nullptr));
        btmFIndSupplier->setText(QCoreApplication::translate("FindSupplier", "FInd Supplier", nullptr));
        label->setText(QCoreApplication::translate("FindSupplier", "Find Supplier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindSupplier: public Ui_FindSupplier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDSUPPLIER_H

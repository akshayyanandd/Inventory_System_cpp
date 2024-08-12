/********************************************************************************
** Form generated from reading UI file 'additem.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEM_H
#define UI_ADDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddItem
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtItemName;
    QLabel *label_2;
    QLineEdit *txtQuantity;
    QLabel *label_3;
    QLineEdit *txtPrice;
    QLabel *label_5;
    QLineEdit *txtSupplierID;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *AddItem)
    {
        if (AddItem->objectName().isEmpty())
            AddItem->setObjectName("AddItem");
        AddItem->resize(400, 400);
        AddItem->setMaximumSize(QSize(400, 400));
        formLayoutWidget = new QWidget(AddItem);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(29, 50, 331, 181));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtItemName = new QLineEdit(formLayoutWidget);
        txtItemName->setObjectName("txtItemName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtItemName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtQuantity = new QLineEdit(formLayoutWidget);
        txtQuantity->setObjectName("txtQuantity");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtQuantity);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtPrice = new QLineEdit(formLayoutWidget);
        txtPrice->setObjectName("txtPrice");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtPrice);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        txtSupplierID = new QLineEdit(formLayoutWidget);
        txtSupplierID->setObjectName("txtSupplierID");

        formLayout->setWidget(3, QFormLayout::FieldRole, txtSupplierID);

        btnSave = new QPushButton(AddItem);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(240, 260, 83, 29));
        btnReset = new QPushButton(AddItem);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(120, 260, 83, 29));

        retranslateUi(AddItem);

        QMetaObject::connectSlotsByName(AddItem);
    } // setupUi

    void retranslateUi(QDialog *AddItem)
    {
        AddItem->setWindowTitle(QCoreApplication::translate("AddItem", "Add Item", nullptr));
        label->setText(QCoreApplication::translate("AddItem", "Item Name", nullptr));
        label_2->setText(QCoreApplication::translate("AddItem", "Quantity", nullptr));
        label_3->setText(QCoreApplication::translate("AddItem", "Price", nullptr));
        label_5->setText(QCoreApplication::translate("AddItem", "SupplierID", nullptr));
        btnSave->setText(QCoreApplication::translate("AddItem", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("AddItem", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItem: public Ui_AddItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEM_H

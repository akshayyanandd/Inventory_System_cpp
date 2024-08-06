/********************************************************************************
** Form generated from reading UI file 'addsupplier.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSUPPLIER_H
#define UI_ADDSUPPLIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddSupplier
{
public:
    QPushButton *btnSave;
    QPushButton *btmReset;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtSupplierName;
    QTextEdit *txtSupplierContact;

    void setupUi(QDialog *AddSupplier)
    {
        if (AddSupplier->objectName().isEmpty())
            AddSupplier->setObjectName("AddSupplier");
        AddSupplier->resize(400, 300);
        AddSupplier->setMaximumSize(QSize(400, 300));
        btnSave = new QPushButton(AddSupplier);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(280, 210, 83, 29));
        btmReset = new QPushButton(AddSupplier);
        btmReset->setObjectName("btmReset");
        btmReset->setGeometry(QRect(180, 210, 83, 29));
        formLayoutWidget = new QWidget(AddSupplier);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(39, 30, 331, 151));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtSupplierName = new QLineEdit(formLayoutWidget);
        txtSupplierName->setObjectName("txtSupplierName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtSupplierName);

        txtSupplierContact = new QTextEdit(formLayoutWidget);
        txtSupplierContact->setObjectName("txtSupplierContact");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtSupplierContact);


        retranslateUi(AddSupplier);

        QMetaObject::connectSlotsByName(AddSupplier);
    } // setupUi

    void retranslateUi(QDialog *AddSupplier)
    {
        AddSupplier->setWindowTitle(QCoreApplication::translate("AddSupplier", "Add Supplier", nullptr));
        btnSave->setText(QCoreApplication::translate("AddSupplier", "Save", nullptr));
        btmReset->setText(QCoreApplication::translate("AddSupplier", "Reset", nullptr));
        label->setText(QCoreApplication::translate("AddSupplier", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("AddSupplier", "Contact", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddSupplier: public Ui_AddSupplier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSUPPLIER_H

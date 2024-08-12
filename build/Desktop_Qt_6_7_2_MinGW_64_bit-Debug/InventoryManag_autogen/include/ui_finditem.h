/********************************************************************************
** Form generated from reading UI file 'finditem.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDITEM_H
#define UI_FINDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindItem
{
public:
    QLineEdit *txtItemName;
    QLabel *label;
    QPushButton *btmFIndItem;
    QTableView *tableView;

    void setupUi(QDialog *FindItem)
    {
        if (FindItem->objectName().isEmpty())
            FindItem->setObjectName("FindItem");
        FindItem->resize(400, 300);
        txtItemName = new QLineEdit(FindItem);
        txtItemName->setObjectName("txtItemName");
        txtItemName->setGeometry(QRect(82, 20, 161, 28));
        label = new QLabel(FindItem);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 63, 20));
        btmFIndItem = new QPushButton(FindItem);
        btmFIndItem->setObjectName("btmFIndItem");
        btmFIndItem->setGeometry(QRect(280, 20, 83, 29));
        tableView = new QTableView(FindItem);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(50, 80, 256, 192));

        retranslateUi(FindItem);

        QMetaObject::connectSlotsByName(FindItem);
    } // setupUi

    void retranslateUi(QDialog *FindItem)
    {
        FindItem->setWindowTitle(QCoreApplication::translate("FindItem", "FInd Item", nullptr));
        label->setText(QCoreApplication::translate("FindItem", "Find Item", nullptr));
        btmFIndItem->setText(QCoreApplication::translate("FindItem", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindItem: public Ui_FindItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDITEM_H

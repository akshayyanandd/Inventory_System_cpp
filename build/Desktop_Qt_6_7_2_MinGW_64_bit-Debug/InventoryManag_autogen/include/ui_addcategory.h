/********************************************************************************
** Form generated from reading UI file 'addcategory.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCATEGORY_H
#define UI_ADDCATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_AddCategory
{
public:

    void setupUi(QDialog *AddCategory)
    {
        if (AddCategory->objectName().isEmpty())
            AddCategory->setObjectName("AddCategory");
        AddCategory->resize(400, 300);

        retranslateUi(AddCategory);

        QMetaObject::connectSlotsByName(AddCategory);
    } // setupUi

    void retranslateUi(QDialog *AddCategory)
    {
        AddCategory->setWindowTitle(QCoreApplication::translate("AddCategory", "Add Category", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCategory: public Ui_AddCategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCATEGORY_H

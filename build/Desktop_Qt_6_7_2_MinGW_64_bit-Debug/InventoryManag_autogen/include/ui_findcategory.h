/********************************************************************************
** Form generated from reading UI file 'findcategory.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCATEGORY_H
#define UI_FINDCATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_FindCategory
{
public:

    void setupUi(QDialog *FindCategory)
    {
        if (FindCategory->objectName().isEmpty())
            FindCategory->setObjectName("FindCategory");
        FindCategory->resize(400, 300);

        retranslateUi(FindCategory);

        QMetaObject::connectSlotsByName(FindCategory);
    } // setupUi

    void retranslateUi(QDialog *FindCategory)
    {
        FindCategory->setWindowTitle(QCoreApplication::translate("FindCategory", "Find Category", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindCategory: public Ui_FindCategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCATEGORY_H

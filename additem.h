#ifndef ADDITEM_H
#define ADDITEM_H

#include <QDialog>

#include "databaseheader.h"
namespace Ui {
class AddItem;
}

class AddItem : public QDialog
{
    Q_OBJECT

public:
    explicit AddItem(QWidget *parent = nullptr);
    ~AddItem();

private slots:
    void on_btnSave_clicked();

private:
    Ui::AddItem *ui;
};

#endif // ADDITEM_H

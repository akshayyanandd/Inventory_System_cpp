#ifndef FINDITEM_H
#define FINDITEM_H

#include <QDialog>
#include "databaseheader.h"
namespace Ui {
class FindItem;
}

class FindItem : public QDialog
{
    Q_OBJECT

public:
    explicit FindItem(QWidget *parent = nullptr);
    ~FindItem();

private slots:
    void on_btmFIndItem_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::FindItem *ui;
    QSqlQueryModel *model;
};

#endif // FINDITEM_H

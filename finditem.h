#ifndef FINDITEM_H
#define FINDITEM_H

#include <QDialog>

namespace Ui {
class FindItem;
}

class FindItem : public QDialog
{
    Q_OBJECT

public:
    explicit FindItem(QWidget *parent = nullptr);
    ~FindItem();

private:
    Ui::FindItem *ui;
};

#endif // FINDITEM_H

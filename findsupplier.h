#ifndef FINDSUPPLIER_H
#define FINDSUPPLIER_H

#include <QDialog>

namespace Ui {
class FindSupplier;
}

class FindSupplier : public QDialog
{
    Q_OBJECT

public:
    explicit FindSupplier(QWidget *parent = nullptr);
    ~FindSupplier();

private:
    Ui::FindSupplier *ui;
};

#endif // FINDSUPPLIER_H

#ifndef DIAOGLIST_H
#define DIAOGLIST_H

#include <QWidget>

namespace Ui {
class DiaogList;
}

class DiaogList : public QWidget
{
    Q_OBJECT

public:
    explicit DiaogList(QWidget *parent = nullptr);
    ~DiaogList();

private:
    Ui::DiaogList *ui;
};

#endif // DIAOGLIST_H

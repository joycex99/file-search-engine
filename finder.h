#ifndef FINDER_H
#define FINDER_H

#include <QWidget>
#include "inverted_index.h"
#include "ranking.h"
#include "transform.h"

namespace Ui {
class Finder;
}

class Finder : public QWidget
{
    Q_OBJECT

public:
    explicit Finder(QWidget *parent = 0);
    ~Finder();

private slots:
    void on_searchButton_clicked();

    void on_searchBar_returnPressed();

    void search();

private:
    Ui::Finder *ui;

    InvertedIndex inv_ind;
};

#endif // FINDER_H
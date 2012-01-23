#ifndef QUIZHISTORYWINDOW_H
#define QUIZHISTORYWINDOW_H

#include <QDialog>
#include "commontable.h"
#include <QStringListModel>
#include "studentdb.h"

namespace Ui {
class QuizHistorywindow;
}

class QuizHistorywindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit QuizHistorywindow(QWidget *parent = 0);
    ~QuizHistorywindow();
    
private slots:

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::QuizHistorywindow *ui;
    commontable *tablecommon;

    QStringList list;
    QStringListModel *listmodel;
    StudentDB database;

};

#endif // QUIZHISTORYWINDOW_H

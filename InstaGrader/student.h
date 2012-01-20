#ifndef STUDENT_H
#define STUDENT_H
#include <QString>
#include <QVector>

#include "quiz.h"

class Student
{
private:
    QString studentName;
    QString studentID;
    // we don't even need quiz vector here.
    QVector <StudentQuiz> quizVector;

public:
    Student();
    Student(QString &);
    Student(QString &, QString &);
    void setName(QString &);
    QString getName();
    void editQuiz(QString &, StudentQuiz &);
    void newQuiz(StudentQuiz &);
    ~Student();
};

#endif // STUDENT_H

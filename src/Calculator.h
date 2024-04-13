#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "function.h"
#include <QWidget>
QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QWidget
{
    Q_OBJECT

public:

    Calculator(QWidget *parent = nullptr);
    ~Calculator();


public slots:
    void sin();
    void arcsin();
    void cos();
    void arctan();
private:
    Ui::Calculator *ui;
};



#endif // CALCULATOR_H

#include "Calculator.h"
#include "ui_Calculator.h"
#include "function.h"

Calculator::Calculator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    QPushButton *button1 = this->findChild<QPushButton *>("btn1");
    {
        connect(button1, &QPushButton::clicked, this, &Calculator::sin);
        }
    QPushButton *button2 = this->findChild<QPushButton *>("btn2");
    {
        connect(button2, &QPushButton::clicked, this, &Calculator::arcsin);
        }
    QPushButton *button3 = this->findChild<QPushButton *>("btn3");
    {
        connect(button3, &QPushButton::clicked, this, &Calculator::cos);
        }
    QPushButton *button4 = this->findChild<QPushButton *>("btn4");
    {
        connect(button4, &QPushButton::clicked, this, &Calculator::arctan);
        }

}
Calculator::~Calculator()
{
    delete ui;
}

void Calculator::sin(){
    bool sin;
    double value_sin = ui->sin_edit->text().toDouble(&sin);
      double res=sin_approx_degrees(value_sin,terms);
      QString resStr = QString::number(res);
       ui->result1->setText(resStr);
}
void Calculator::arcsin(){
    bool arcsin;
    double value_arcsin = ui->arcsin_edit->text().toDouble(&arcsin);
      double res=arcsin_approx(value_arcsin,accuracy);
      QString resStr = QString::number(res);
       ui->result2->setText(resStr);
}
void Calculator::cos(){
    bool cos;
    double value_cos = ui->cos_edit->text().toDouble(&cos);
      double res=cos_approx_degrees(value_cos,terms);
      QString resStr = QString::number(res);
       ui->result3->setText(resStr);
}
void Calculator::arctan(){
    bool arccos;
    double value_arctan = ui->arccos_edit->text().toDouble(&arccos);
      double res=arctan_approx(value_arctan,accuracy);
      QString resStr = QString::number(res);
       ui->result4->setText(resStr);
}





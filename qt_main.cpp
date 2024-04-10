#include <QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QGridLayout>
#include <QDoubleValidator>
#include <cmath>

// 定义 Ui::MainWindow，这里直接在同一个.cpp文件中定义所有UI组件和布局
namespace Ui {
    class MainWindow {
    public:
        QLineEdit *lineEdit_sin;
        QLineEdit *lineEdit_cos;
        QLabel *label_result_arcsin;
        QLabel *label_result_arccos;

        // 初始化UI的函数
        void setupUi(QWidget *parent) {
            auto *layout = new QGridLayout(parent);

            auto *sinLabel = new QLabel("sin", parent);
            auto *cosLabel = new QLabel("cos", parent);
            auto *arcsinLabel = new QLabel("arcsin", parent);
            auto *arccosLabel = new QLabel("arccos", parent);

            lineEdit_sin = new QLineEdit(parent);
            lineEdit_cos = new QLineEdit(parent);
            label_result_arcsin = new QLabel(parent);
            label_result_arccos = new QLabel(parent);

            layout->addWidget(sinLabel, 0, 0);
            layout->addWidget(lineEdit_sin, 0, 1);
            layout->addWidget(arcsinLabel, 0, 2);
            layout->addWidget(label_result_arcsin, 0, 3);
            layout->addWidget(cosLabel, 1, 0);
            layout->addWidget(lineEdit_cos, 1, 1);
            layout->addWidget(arccosLabel, 1, 2);
            layout->addWidget(label_result_arccos, 1, 3);

            parent->setLayout(layout);
        }
    };
}

// 定义 MainWindow 类
class MainWindow : public QWidget {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr) : QWidget(parent), ui(new Ui::MainWindow) {
        ui->setupUi(this);

        // 连接信号和槽
        connect(ui->lineEdit_sin, &QLineEdit::textChanged, this, [this](){
            bool ok;
            double sinValue = ui->lineEdit_sin->text().toDouble(&ok);
            if (ok) {
                double arcsinValue = asin(sinValue);
                ui->label_result_arcsin->setText(QString::number(arcsinValue));
            }
        });
        
        connect(ui->lineEdit_cos, &QLineEdit::textChanged, this, [this](){
            bool ok;
            double cosValue = ui->lineEdit_cos->text().toDouble(&ok);
            if (ok) {
                double arccosValue = acos(cosValue);
                ui->label_result_arccos->setText(QString::number(arccosValue));
            }
        });
    }

    ~MainWindow() {
        delete ui;
    }

private:
    Ui::MainWindow *ui;
};

    int main(int argc, char *argv[]) {
        QApplication app(argc, argv);
       MainWindow window;
         window.show();
         return app.exec();
     }
  



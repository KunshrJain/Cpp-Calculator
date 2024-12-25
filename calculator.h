#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_pus3_clicked();

    void on_pus2_clicked();

    void on_pus1_clicked();

    void on_pus4_clicked();

    void on_pus5_clicked();

    void on_pushButton_7_clicked();

    void on_pus7_clicked();

    void on_pus8_clicked();

    void on_pus9_clicked();

    void on_pus0_clicked();

    void on_Calc_clicked();

    void on_puspow_clicked();

    void on_pusfact_clicked();

    void on_pusroot_clicked();

    void on_pusclc_clicked();

    void on_pusback_clicked();

    void on_pusmul_clicked();

    void on_pusdiv_clicked();

    void on_pusrem_clicked();

    void on_pusadd_clicked();

    void on_pusmin_clicked();
private:
    Ui::Calculator *ui;
private slots:
    void answer();
};
#endif // CALCULATOR_H

#include "calculator.h"
#include "ui_calculator.h"
#include "QDebug"
#include "cmath"
using namespace std;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

QString str1("");
QString str2("");
long int str11;
long int str22;
float result;
int chk=0;
int f=0;
int resultr=1;

void Calculator::on_pus3_clicked()
{
    if(chk==0){
        str1=str1+"3";
        ui->input1->setText(str1);
    }
    else{
        str2=str2+"3";
        ui->input2->setText(str2);
    }

}


void Calculator::on_pus2_clicked()
{
    if(chk==0){
        str1=str1+"2";
        ui->input1->setText(str1);
    }
    else{
        str2=str2+"2";
        ui->input2->setText(str2);
    }

}


void Calculator::on_pus1_clicked()
{
    if(chk==0){
        str1=str1+"1";
        ui->input1->setText(str1);
    }
    else{
        str2=str2+"1";
        ui->input2->setText(str2);
    }

}


void Calculator::on_pus4_clicked()
{
    if(chk==0){
        str1=str1+"4";
        ui->input1->setText(str1);
    }
    else{
        str2=str2+"4";
        ui->input2->setText(str2);
    }

}


void Calculator::on_pus5_clicked()
{
    if(chk==0){
        str1=str1+"5";
        ui->input1->setText(str1);
    }
    else{
        str2=str2+"5";
        ui->input2->setText(str2);
    }

}


void Calculator::on_pushButton_7_clicked()
{
    if(chk==0){
        str1=str1+"6";
        ui->input1->setText(str1);
    }
    else{
        str2=str2+"6";
        ui->input2->setText(str2);
    }

}


void Calculator::on_pus7_clicked()
{
    if(chk==0){
        str1=str1+"7";
        ui->input1->setText(str1);
    }
    else{
        str2=str2+"7";
        ui->input2->setText(str2);
    }

}


void Calculator::on_pus8_clicked()
{
    if(chk==0){
        str1=str1+"8";
        ui->input1->setText(str1);
    }
    else{
        str2=str2+"8";
        ui->input2->setText(str2);
    }

}


void Calculator::on_pus9_clicked()
{
    if(chk==0){
        str1=str1+"9";
        ui->input1->setText(str1);
    }
    else{
        str2=str2+"9";
        ui->input2->setText(str2);
    }

}


void Calculator::on_pus0_clicked()
{
    if(chk==0){
        str1=str1+"0";
        ui->input1->setText(str1);
    }
    else{
        str2=str2+"0";
        ui->input2->setText(str2);
    }

}

void Calculator::on_Calc_clicked()
{
    QString resultt;
    str11=str1.toInt();
    str22=str2.toInt();
    switch (f) {
    case 1:
        result=pow(str11,str22);
        resultt=QString::number(result);
        ui->ans->setText(resultt);
        break;
    case 2:
        for (int i = 1; i <= str11; i++) {
            resultr *= i;
        }
        resultt=QString::number(resultr);
        ui->ans->setText(resultt);
        break;
    case 3:
        result=sqrt(str11);
        resultt=QString::number(result);
        ui->ans->setText(resultt);
        break;
    case 4:
        result=str11+str22;
        resultt=QString::number(result);
        ui->ans->setText(resultt);
        break;
    case 5:
        result=str11-str22;
        resultt=QString::number(result);
        ui->ans->setText(resultt);
        break;
    case 6:
        result=str11*str22;
        resultt=QString::number(result);
        ui->ans->setText(resultt);
        break;
    case 7:
        result=str11/str22;
        resultt=QString::number(result);
        ui->ans->setText(resultt);
        break;
    case 8:
        result=str11%str22;
        resultt=QString::number(result);
        ui->ans->setText(resultt);
        break;

    default:
        ui->ans->setText("Error");
        break;
    }
}




void Calculator::on_puspow_clicked()
{
    f=1;
    chk=2;
    ui->operator_2->setText("^");
}


void Calculator::on_pusfact_clicked()
{
    f=2;
    chk=1;
    ui->operator_2->setText("!");
    ui->input2->setText("-");
}


void Calculator::on_pusroot_clicked()
{
    f=3;
    chk=1;
    ui->operator_2->setText("√");
    ui->input2->setText("-");
}


void Calculator::on_pusclc_clicked()
{
    str11=0;
    str22=0;
    str1="";
    str2="";
    chk=0;
    f=0;
    result=0;
    resultr=0;
    ui->input1->setText("");
    ui->input2->setText("");
    ui->operator_2->setText("");
    ui->ans->setText("");

}


void Calculator::on_pusback_clicked()
{
    if(chk==0){
        str1.chop(1);
        ui->input1->setText(str1);
    }
    else{
        str2.chop(1);
        ui->input2->setText(str2);
    }
}


void Calculator::on_pusadd_clicked()
{
    f=4;
    chk=1;
    ui->operator_2->setText("+");
}


void Calculator::on_pusmin_clicked()
{
    f=5;
    chk=1;
    ui->operator_2->setText("-");
}


void Calculator::on_pusmul_clicked()
{
    f=6;
    chk=1;
    ui->operator_2->setText("x");
}


void Calculator::on_pusdiv_clicked()
{
    f=7;
    chk=1;
    ui->operator_2->setText("/");
}


void Calculator::on_pusrem_clicked()
{
    f=8;
    chk=1;
    ui->operator_2->setText("%");
}

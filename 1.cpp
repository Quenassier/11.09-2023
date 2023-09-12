#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double loan_amount;
    int loan_term;
    double interest_rate;
    string loan_type;

    cout << "Введите общую сумму кредита: ";
    cin >> loan_amount;

    cout << "Введите срок кредита в месяцах: ";
    cin >> loan_term;

    cout << "Введите процентную ставку (годовую): ";
    cin >> interest_rate;

    cout << "Введите тип кредита (1-аннуитетный или 2-дифференцированный): ";
    cin >> loan_type;

    double monthly_payment, total_payment, overpayment, principal ,interest_payment, principal_payment, term ,total_payment2  ;

    if (loan_type == "1") {
        double monthly_interest_rate = interest_rate / 12 / 100;
        monthly_payment = loan_amount * (monthly_interest_rate / (1 - pow(1 + monthly_interest_rate, -loan_term)));
        total_payment = monthly_payment * loan_term;
        overpayment = total_payment - loan_amount;
    }
    else if (loan_type == "2") {
        double monthly_interest_rate = interest_rate / 12 / 100;

    double interest_payment = principal * monthly_interest_rate;

   
    double principal_payment = principal / term;


    double total_payment2 = principal_payment + interest_payment;


    }
    else {
        cout << "Неверный тип кредита." << endl;
        return 1;
    }

    cout << "Ежемесячный платеж: " << monthly_payment << endl;
    cout << "Переплата по кредиту: " << overpayment << endl;
    cout << "Общая выплата: " << total_payment << endl;



    return 0;
}

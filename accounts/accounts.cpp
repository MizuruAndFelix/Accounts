#include <iostream>
#include <locale.h>
using namespace std;

struct BankAccount
{
    int AccNumber;
    string AccName;
    double balance;
};

void BalanceChange(BankAccount* B, int t=0)
{
    cout << "\nВведите новый баланс: ";
    cin >> t;
    B->balance = t;
}


int main()
{
    setlocale(LC_ALL, "");

    BankAccount User;
    cout << "Введите номер счёта: ";
    cin >> User.AccNumber;
    cout << "\nВведите имя владельца: ";
    cin >> User.AccName;
    cout << "\nВведите баланс: ";
    cin >> User.balance;

    BalanceChange(&User);
   
    cout << "\nВаш счёт: " << User.AccName << " " << User.AccNumber << " " << User.balance;
}

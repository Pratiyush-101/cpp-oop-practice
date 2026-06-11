#include<iostream>
using namespace std;

class BankAccount{
    public:
        string accountHolder;
        int accountNo;
        int balance;

        void deposit(int amount){
            balance += amount;
            cout << "Deposited: "<< amount << endl;
            cout << "New Balance: " << balance << endl;
        }

        void withdraw(int amount){
            if(amount > balance){
                cout << "Insufficient balance!" << endl;
            }
            else{
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
                cout << "New Balance: "<< balance << endl;
            }
        }

        void showBalance(){
            cout << "Account Holder: " << accountHolder << endl;
            cout << "Account No: " << accountNo << endl;
            cout << "Balance: "<< balance << endl;
        }
};

int main(){
    BankAccount acc1;
    acc1.accountHolder = "Ronit";
    acc1.accountNo = 12345;
    acc1.balance = 100000;
    acc1.showBalance();
    cout << "-------------------------"<< endl;
    acc1.deposit(1000);
    cout << "-------------------------"<< endl;
    acc1.withdraw(99999999);

    return 0;
}
#include<iostream>
using namespace std;

class BankAccount{
    public:
        string accountHolder;
        int accountNo;
        int balance;

        BankAccount(string accountHolder, int accountNo, int balance){
            this->accountHolder = accountHolder;
            this->accountNo = accountNo;
            this->balance = balance;
        }

        BankAccount(){
            balance = 0;
            accountHolder = "Unknown";
            accountNo = 0;
        }

        ~BankAccount(){
            cout << "Account closed!" << endl;
        }

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
    BankAccount acc1("Rohit", 123456, 100000);
    acc1.showBalance();
    cout << "-------------------------"<< endl;
    acc1.deposit(1000);
    cout << "-------------------------"<< endl;
    acc1.withdraw(500);
    cout << "*************************"<< endl;
    BankAccount acc2;
    acc2.showBalance();
    cout << "-------------------------"<< endl;
    acc2.deposit(1000);
    cout << "-------------------------"<< endl;
    acc2.withdraw(500);

    return 0;
}

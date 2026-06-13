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

        void deposit(int amount){
            balance += amount;
            cout << "Amount deposited: " << amount << endl << "New balance: " << balance << endl;
        }

        void withdraw(int amount){
            if(amount > balance){
                cout << "Insufficient balance!" << endl;
            }
            else{
                balance -= amount;
                cout << "Withdrawal amount: " << amount << endl << "New balance: " << balance << endl;
            }
        }

        void showBalance(){
            cout << "Account holder: " << accountHolder << endl << "Account No. : " << accountNo << endl << "Balance: " << balance << endl;
        }
};

class SavingsAccount:public BankAccount{
    public:
        int interestRate;

        SavingsAccount(string accountHolder, int accountNo, int balance, int interestRate):BankAccount(accountHolder, accountNo, balance){
            this->interestRate = interestRate;
        }

        void addInterest(){
            int interest = balance * interestRate/100;
            balance += interest;
            cout << "Interest amount: " << interest << endl;
            cout << "Balance: " << balance << endl;
        }
};

class CurrentAccount:public BankAccount{
    public:
        int overdraftLimit;

        CurrentAccount(string accountHolder, int accountNo, int balance, int overdraftLimit):BankAccount(accountHolder, accountNo, balance){
            this->overdraftLimit = overdraftLimit;
        }

        void showOverdraft(){
            cout << "Loan amount: " << overdraftLimit << endl;
        }
};

int main(){
    SavingsAccount s1("John", 12345678, 100000, 6);
    s1.deposit(1000);
    s1.withdraw(500);
    s1.showBalance();
    s1.addInterest();

    cout << "---------------------------"<< endl;

    CurrentAccount c1("Holmes", 13468924, 500000, 10000);
    c1.deposit(1000);
    c1.withdraw(500);
    c1.showBalance();
    c1.showOverdraft();

    return 0;
}

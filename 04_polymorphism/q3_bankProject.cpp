#include<iostream>
using namespace std;

class BankAccount{
    public: 
        string accountHolder;
        int accountNo;
        int balance;

        virtual void showAccountType(){
            cout << "Basic Account." << endl;
        }

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

        virtual ~BankAccount(){
            cout << "BankAccount was destroyed!" << endl;
        }
};

class SavingsAccount:public BankAccount{
    public:
        int interestRate;


        SavingsAccount(string accountHolder, int accountNo, int balance, int interestRate):BankAccount(accountHolder, accountNo, balance){
            this->interestRate = interestRate;
        }

        void showAccountType(){
            cout << "Savings Account." << endl;
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

        void showAccountType(){
            cout << "Current Account."  << endl;
        }

        void showOverdraft(){
            cout << "Loan amount: " << overdraftLimit << endl;
        }
};

int main(){
    BankAccount* savings = new SavingsAccount("John", 12345678, 100000, 6);
    BankAccount* current = new CurrentAccount("Holmes", 13468924, 500000, 10000);

    savings->showAccountType();
    savings->deposit(1000);
    savings->withdraw(9000);

    cout << "---------------------------"<< endl;

    current->showAccountType();
    current->deposit(2000);
    current->withdraw(500);

    delete savings;
    delete current;
    
    return 0;
}

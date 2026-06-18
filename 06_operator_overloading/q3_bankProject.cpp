#include<iostream>
using namespace std;

class Account{
    private:
        int accountNo;
        int balance;
    protected: 
        string accountHolder;

    public:

        Account operator+(Account a){
            return Account("Merged", 0,  balance + a.balance);
        }

        bool operator>(Account a){
            return balance > a.balance;
        }

        bool operator==(Account a){
            return balance == a.balance;
        }

        // virtual void showAccountType() = 0;

        Account(string accountHolder, int accountNo, int balance){
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

        int getBalance(){
            return balance;
        }

        // virtual ~Account(){
        //     cout << "Account was destroyed!" << endl;
        // }

};

class SavingsAccount:public Account{
    public:
        int interestRate;

        SavingsAccount(string accountHolder, int accountNo, int balance, int interestRate):Account(accountHolder, accountNo, balance){
            this->interestRate = interestRate;
        }

        void addInterest(){
            int interest = getBalance() * interestRate/100;
            deposit(interest);
            cout << "Interest amount: " << interest << endl;
            cout << "Balance: " << getBalance() << endl;
        }

        void showAccountType(){
            cout << "Savings Account." << endl;
        }
};

class CurrentAccount:public Account{
    public:
        int overdraftLimit;

        CurrentAccount(string accountHolder, int accountNo, int balance, int overdraftLimit):Account(accountHolder, accountNo, balance){
            this->overdraftLimit = overdraftLimit;
        }

        void showOverdraft(){
            cout << "Loan amount: " << overdraftLimit << endl;
        }

        void showAccountType(){
            cout << "Current Account." << endl;
        }
};

int main(){

    Account a1("John", 12345678, 1000000);
    Account a2("Kevin", 13579111, 500000);
    Account a3 = a1 + a2;

    cout << "a1+a2 = " << a3.getBalance() << endl;
    cout << boolalpha;
    cout << "a1 > a2: " << (a1 > a2) << endl;
    cout << "a1 == a2: " << (a1 == a2) << endl;

    
    // Account* savings = new SavingsAccount("John", 12345678, 100000, 5);
    // Account* current = new CurrentAccount("Kevin", 13579111, 500000, 20000);

    // savings->showBalance();
    // // savings->showAccountType();

    // cout << "----------------" << endl;

    // current->showBalance();
    // // current->showAccountType();
    // cout << "----------------" << endl;
    // delete savings;
    // delete current;

    return 0;
}
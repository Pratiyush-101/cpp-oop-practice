#include<iostream>
using namespace std;

class Account{
    private:
        int accountNo;
        int balance;
    protected: 
        string accountHolder;

    public:

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

        int getBalance() const{
            return balance;
        }

        int getAccountNo(){
            return accountNo;
        }

        bool operator>(const Account& a){
            return getBalance() > a.getBalance();
        }

        bool operator==(const Account& a){
            return getBalance() == a.getBalance();
        }

        virtual void showAccountType() = 0;

        virtual ~Account(){
            cout << "Account was destroyed!" << endl;
        }

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

template<typename T>
class Transaction{
    public:
        T amount;
        string type;

        Transaction(T amount, string type){
            this->amount = amount;
            this->type = type;
        }

        void showTransaction(){
            cout << "Amount: " << amount << " $ " << endl;
            cout << "Type: " << type << endl;
        }

        T getAmount(){
            return amount;
        }
};

void mergeAccounts(Account& a, Account& b){
    cout << "Merged Balance: " << a.getBalance() + b.getBalance() << endl;
}
int main(){
    Account* savings = new SavingsAccount("John", 12345678, 100000, 5);
    Account* current = new CurrentAccount("Kevin", 13579111, 500000, 20000);

    savings->showBalance();
    savings->showAccountType();

    cout << "----------------" << endl;

    current->showBalance();
    current->showAccountType();
    cout << "----------------" << endl;


    SavingsAccount* s = dynamic_cast<SavingsAccount*>(savings);
    s->addInterest();
    cout << "----------------" << endl;
    CurrentAccount* c = dynamic_cast<CurrentAccount*>(current);
    c->showOverdraft();
    cout << "----------------" << endl;

    Transaction<int> t1(1000, "deposit");
    Transaction<float> t2(500.50f, "withdrawal");
    t1.showTransaction();
    t2.showTransaction();
    cout << "----------------" << endl;
    cout << boolalpha;
    cout << "Savings Account > Current Account: " << (*savings > *current) << endl;
    cout << "Savings Account == Current Account: " << (*savings == *current) << endl;
    cout << "----------------" << endl;
    mergeAccounts(*savings, *current);

    delete savings;
    delete current;

    return 0;
}
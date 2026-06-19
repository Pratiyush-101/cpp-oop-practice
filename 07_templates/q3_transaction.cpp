#include<iostream>
using namespace std;

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

int main(){
    Transaction<int> t1(1000, "deposit");
    Transaction<float> t2(500.50f, "withdrawal");
    Transaction<int> t3(2500, "deposit");

    t1.showTransaction();
    t2.showTransaction();
    t3.showTransaction();
}
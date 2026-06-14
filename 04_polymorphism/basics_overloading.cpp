#include<iostream>
using namespace std;

class Calculator{
    public: 
        int add(int a, int b){
            return a+b;
        }

        float add(float a, float b){
            return a + b;
        }

        int add(int a, int b, int c){
            return a+b+c;
        }

        int multiply(int a, int b){
            return a*b;
        }

        float multiply(float a, float b){
            return a*b;
        }
};

int main(){
    Calculator calc;
    cout << calc.add(23, 33) << endl;
    cout << calc.add(24.5f, 35.5f) << endl;
    cout << calc.add(33, 33, 33) << endl;

    cout<<"----------------" << endl;

    cout << calc.multiply(12, 20) << endl;
    cout << calc.multiply(12.5f, 20.5f) << endl;

    return 0;
}

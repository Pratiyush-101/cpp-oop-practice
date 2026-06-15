#include<iostream>
using namespace std;

class Printer{
    public:
        void print(int n){
            cout << "Integer: " << n << endl;
        }

        void print(float f){
            cout << "Float: " << f << endl;
        }

        void print(string s){
            cout << "String: " << s << endl;
        }

        void print(int a, int b){
            cout << "Sum: " << a+b << endl;
        }
};

int main(){
    Printer p1;
    p1.print(10);
    p1.print(10.5f);
    p1.print("Hello!");
    p1.print(10, 10);

    return 0;
}
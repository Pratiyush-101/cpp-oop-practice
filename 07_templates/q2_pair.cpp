#include<iostream>
using namespace std;

template<typename T>
class Pair{
    public:
        T a, b;

        Pair(T a, T b){
            this->a = a;
            this->b = b;
        }

        void swap(){
            T temp = a;
            a = b;
            b = temp;

        }

        void display(){
            cout << a << " " << b << endl;
        }
};

int main(){
    Pair<int> p1(3, 7);
    Pair<float> p2(3.5f, 2.1f);
    Pair<string> p3("Hello!", "Damn!");
    Pair<double> p4(4.6, 7.7);
    p1.display();
    p1.swap();
    p1.display();
    cout << "-----------" << endl;
    p2.display();
    p2.swap();
    p2.display();
    cout << "-----------" << endl;
    p3.display();
    p3.swap();
    p3.display();
    cout << "-----------" << endl;
    p4.display();
    p4.swap();
    p4.display();
    return 0;
}
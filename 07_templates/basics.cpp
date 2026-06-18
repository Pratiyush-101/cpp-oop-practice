#include<iostream>
using namespace std;

template<typename T>

T add(T a, T b){
    return a+b;
}

template<typename T>
class Box{
    public:
        T value;

        Box(T value){
            this->value = value;
        }

        void show(){
            cout << "Value: " << value << endl;
        }


};

int main(){

    cout << add(3, 6) << endl;
    cout << add(4.5f, 5.5f) << endl;
    cout << add(1.5, 4.5) << endl;

    Box<int> b1(10);
    Box<float> b2(4.5f);
    Box<string> b3("Damn!");

    b1.show();
    b2.show();
    b3.show();

    return 0;
}
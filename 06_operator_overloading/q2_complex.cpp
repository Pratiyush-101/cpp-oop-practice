#include<iostream>
#include<cmath>
using namespace std;

class Complex{
    public:
        float real, imaginary;

        Complex(float real, float imaginary){
            this->real = real;
            this->imaginary = imaginary;
        }

        Complex operator+(Complex c){
            return Complex(real + c.real, imaginary + c.imaginary); 
        }

        Complex operator-(Complex c){
            return Complex(real - c.real, imaginary - c.imaginary);
        }

        bool operator==(Complex c){
            return real == c.real, imaginary == c.imaginary;
        }
};

int main(){
    Complex c1(3,4);
    Complex c2(2, 5);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;

    cout << "c1 + c2 = " << c3.real << " + " << c3.imaginary << "i" << endl;
    cout << "c1 - c2 = " << c4.real << " + " << c4.imaginary << "i" << endl;

    cout << boolalpha;
    cout << "c1 == c2: " << (c1 == c2) << endl;

    return 0;
}
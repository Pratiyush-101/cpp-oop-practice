#include<iostream>
using namespace std;

class Rectangle{
    public:
        int length;
        int breadth;

        // default constructor
        Rectangle(){
            length = 1;
            breadth = 1;
        }

        // parameterized constructor
        Rectangle(int length, int breadth){
            this->length = length;
            this->breadth = breadth;
        }

        // copy constructor
        Rectangle(Rectangle &obj){
            length = obj.length;
            breadth = obj.breadth;
        }

        int area(){
            return length * breadth;
        }

        int perimeter(){
            return 2 * (length + breadth);
        }
};

int main(){
    Rectangle r1(5, 3);
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;
    cout << "-----------------" << endl;
    Rectangle r2(11, 3);
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl;
    cout << "-----------------" << endl;
    Rectangle r3(r1);
    cout << "Area: " << r3.area() << endl;
    cout << "Perimeter: " << r3.perimeter() << endl;
    cout << "-----------------" << endl;
    Rectangle r4;
    cout << "Area: " << r4.area() << endl;
    cout << "Perimeter: " << r4.perimeter() << endl;

    return 0;
}
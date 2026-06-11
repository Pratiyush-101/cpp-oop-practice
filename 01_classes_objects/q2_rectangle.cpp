#include<iostream>
using namespace std;

class Rectangle{
    public:
        int length;
        int breadth;

        void area(){
            cout << "Area: " << length * breadth << endl;
        }

        void perimeter(){
            cout << "Perimeter: " << 2 * (length + breadth) << endl;
        }
};

int main(){
    Rectangle r1;
    r1.length = 5;
    r1.breadth = 3;
    r1.area();
    r1.perimeter();

    cout << "-------------------------" << endl;

    Rectangle r2;
    r2.length = 10;
    r2.breadth = 4;
    r2.area();
    r2.perimeter();

    return 0;
}
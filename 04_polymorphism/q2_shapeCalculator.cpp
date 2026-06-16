#include<iostream>
using namespace std;

class Shape{
    public:
        virtual float area() = 0;
        virtual void showShape() = 0;
        
        virtual ~Shape(){
            cout << "Shape is destroyed!" << endl;
        }
};

class Circle:public Shape{
    public: 
        float radius;

        Circle(float radius){
            this->radius = radius;
        }

        float area(){
            return 3.14 * radius * radius;
        }

        void showShape(){
            cout << "Radius of the circle: " << radius << endl;
        }
};

class Rectangle:public Shape{
    public: 
        float length, breadth;

        Rectangle(float length, float breadth){
            this->length = length;
            this->breadth = breadth;
        }

        float area(){
            return length * breadth;
        }

        void showShape(){
            cout << "The length and breadth of the rectangle are: " << length << " and " << breadth << endl;
        }
};

class Triangle:public Shape{
    public:

        float base, height;

        Triangle(float base, float height){
            this->base = base;
            this->height = height;
        }

        float area(){
            return 0.5 * base * height;
        }

        void showShape(){
            cout << "The base and height of the triangle are: " << base << " and " << height << endl;
        }
};

int main(){
    Shape* s1 = new Circle(5);
    Shape* s2 = new Rectangle(6, 3);
    Shape* s3 = new Triangle(5, 8);

    s1->showShape();
    cout << "Area of the circle: " << s1->area() << endl;
    cout << "-------------------" << endl;
    s2->showShape();
    cout << "Area of the rectangle: " << s2->area() << endl;
    cout << "-------------------" << endl;
    s3->showShape();
    cout << "Area of the triangle: " << s3->area() << endl;
    cout << "-------------------" << endl;

    delete s1;
    delete s2;
    delete s3;

    return 0;
}
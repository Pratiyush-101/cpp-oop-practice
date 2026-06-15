#include<iostream>
using namespace std;

class Animal{
    public:
        virtual void speak(){
            cout << "Speak something.!" << endl;
        }

        virtual void move(){
            cout << "Make some movement.!" << endl;
        }

        virtual ~Animal(){
            cout << "Animal destroyed" << endl;
        }
};

class Dog:public Animal{
    public:
        void speak(){
            cout << "Woof!" << endl;
        }

        void move(){
            cout << "Dog runs." << endl;
        }
};

class Cat:public Animal{
    public:
        void speak(){
            cout << "Meow!" << endl;
        }

        void move(){
            cout << "Cat sneaks." << endl;
        }
};

class Bird:public Animal{
    public:
        void speak(){
            cout << "Tweet!" << endl;
        }

        void move(){
            cout << "Bird flies." << endl;
        }
};

int main(){
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();
    Animal* a3 = new Bird();

    a1->speak();
    a1->move();
    cout << "------------------" << endl;
    a2->speak();
    a2->move();
    cout << "------------------" << endl;
    a3->speak();
    a3->move();
    cout << "------------------" << endl;
    delete a1;
    delete a2;
    delete a3;

    return 0;
}
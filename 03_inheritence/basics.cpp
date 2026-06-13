#include<iostream>
using namespace std;

class Animal{
    public:
        string name;

        Animal(string name){
            this->name = name;
        }

        void eat(){
            cout << name << " is eating." << endl;
        }

        void sleep(){
            cout << name << " is sleeping." << endl;
        }
};

class Dog:public Animal{
    public:
        Dog(string name):Animal(name){
        }

        void bark(){
            cout << name << " is barking." << endl;
        }
};

class Cat:public Animal{
    public:
        Cat(string name):Animal(name){
        }
        
        void meow(){
            cout << name << " is meowing." << endl;
        }
};

int main(){
    Dog d1("Shadow");
    d1.eat();
    d1.bark();
    d1.sleep();

    cout << "------------------------" << endl;

    Cat c1("Viola");
    c1.eat();
    c1.meow();
    c1.sleep();

    return 0;
}
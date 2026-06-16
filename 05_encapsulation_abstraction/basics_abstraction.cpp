#include<iostream>
using namespace std;

class Vehicle{
    public:
        virtual void start() = 0;
        virtual void stop() = 0;
};

class Car:public Vehicle{
    public:

        void start(){
            cout << "Car starts with a key." << endl;
        }

        void stop(){
            cout << "Car stops by brake." << endl;
        }
};

class Bike:public Vehicle{
    public:

        void start(){
            cout << "Bike start with a kick." << endl;
        }

        void stop(){
            cout << "Bike stops by brake." << endl;
        }
};

int main(){

    Vehicle* v1 = new Car();
    Vehicle* v2 = new Bike();
    v1->start();
    v1->stop();
    cout << "------------------" << endl;
    v2->stop();
    v2->start();

    delete v1;
    delete v2;
    
    return 0;
}
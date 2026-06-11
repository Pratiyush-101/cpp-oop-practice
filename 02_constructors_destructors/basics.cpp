#include<iostream>
using namespace std;


class Car{
    public:
        string brand;
        int speed;
        int fuel;

        Car(){
            brand = "Unknown";
            speed = 0;
            fuel = 0;
        }

        Car(string brand, int speed, int fuel){
            this->brand = brand;
            this->speed = speed;
            this->fuel = fuel;
        }

        Car(Car &obj){
            brand = obj.brand;
            speed = obj.speed;
            fuel = obj.fuel;
        }

        ~Car(){
            cout << "Car object destroyed!" <<endl;
        }

        void details(){
            cout<<"Brand: "<<brand<<endl;
            cout<<"Speed: "<<speed<<" km/h"<<endl;
            cout<<"Fuel: "<<fuel<<" liters"<<endl;
        }
};
int main(){
    Car c1;
    c1.details();
    Car c2("Toyota", 120, 50);
    c2.details();
    Car c3(c1);
    c3.details();
    return 0;
}
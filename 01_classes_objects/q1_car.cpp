#include<iostream>
using namespace std;

class Car{
    public:
        string brand;
        int speed;
        int fuel;

        void showDetails(){
            cout << "Brand: " << brand << endl;
            cout << "Speed: " << speed << " km/h" << endl;
            cout << "Fuel: " << fuel << " liters" << endl;
        }
};

int main(){
    Car car1;
    car1.brand = "Tata";
    car1.speed = 120;
    car1.fuel = 50;
    car1.showDetails();

    cout << "--------------------------" << endl;

    Car car2;
    car2.brand = "Toyota";
    car2.speed = 150;
    car2.fuel = 70;
    car2.showDetails();

    return 0;
}
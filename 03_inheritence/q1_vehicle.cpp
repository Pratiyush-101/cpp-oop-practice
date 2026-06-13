#include<iostream>
using namespace std;

class Vehicle{
    public:
        string brand;
        int speed;

        Vehicle(string brand, int speed){
            this->brand = brand;
            this->speed = speed;
        }

        void showInfo(){
            cout << "A "<< brand << " is running at a speed of "<< speed << " km/h." << endl;
        }
};

class Car:public Vehicle{
    public:
        int noOfDoors;

        Car(string brand, int speed, int noOfDoors):Vehicle(brand, speed){
            this->noOfDoors = noOfDoors;
        }

        void showCar(){
            cout << "It has " << noOfDoors << " doors." << endl;
        }
};

class Bike:public Vehicle{
    public:
        bool isElectric;

        Bike(string brand, int speed, bool isElectric):Vehicle(brand, speed){
            this->isElectric = isElectric;
        }

        void showBike(){
            if(isElectric){
                cout << "This is an electric bike." << endl;
            }
            else{
                cout << "This is not an electric bike." << endl;
            }
        }
};

int main(){
    Car c1("Toyata", 150, 4);
    c1.showInfo();
    c1.showCar();

    cout << "-------------------------" << endl;

    Bike b1("BMW", 200, false);
    b1.showInfo();
    b1.showBike();

    return 0;
}
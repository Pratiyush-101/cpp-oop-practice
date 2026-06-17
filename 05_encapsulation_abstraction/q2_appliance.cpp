#include<iostream>
using namespace std;

class Appliance{
    public:
        virtual void turnOn() = 0;
        virtual void turnOff() = 0;
        virtual void showPower() = 0;

        virtual ~Appliance(){
            cout << "Appliance was destroyed!" << endl;
        }
};

class WashingMachine:public Appliance{
    public:
        int capacity;

        WashingMachine(int capacity){
            this->capacity = capacity;
        }

        void turnOn(){
            cout << "Turns on with the power button on top of the machine." << endl;
        }

        void turnOff(){
            cout << "Also turns off with the same power button." << endl;
        }

        void showPower(){
            cout << "Takes about " << capacity << " Watt of capacity." << endl;
        }
};

class AirConditioner:public Appliance{
    public:
        int temperature;

        AirConditioner(int temperature){
            this->temperature = temperature;
        }

        void turnOn(){
            cout << "Turns on via a remote." << endl;
        }

        void turnOff(){
            cout << "Also turns off via the same remote." << endl;
        }

        void showPower(){
            cout << "The room gets cooled down on " << temperature << " degree celsius." << endl;
        }
};

int main(){
    Appliance* a1 = new WashingMachine(22);
    Appliance* a2 = new AirConditioner(26);

    a1->turnOn();
    a1->showPower();
    a1->turnOff();
    cout << "----------------------" << endl;
    a2->turnOn();
    a2->showPower();
    a2->turnOff();
    cout << "----------------------" << endl;
    delete a1;
    delete a2;

    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

class Box{
    public: 
        int volume;

        Box(int volume){
            this->volume = volume;
        }

        int operator+(Box b){
            return volume + b.volume;
        }

        int operator-(Box b){
            return abs(volume - b.volume);
        }

        bool operator==(Box b){
            return volume == b.volume;
        }
};

int main(){
    Box b1(200), b2(300);
    Box b3 = b1 + b2;
    Box b4 = b1-b2;

    cout <<"b3: " << b3.volume << endl;
    cout << "b4: " << b4.volume << endl;
    cout << boolalpha;
    cout << "b1 == b2: " << (b1 == b2) << endl;

    return 0;
}
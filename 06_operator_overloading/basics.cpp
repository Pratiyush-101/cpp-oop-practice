#include<iostream>
using namespace std;

class Distance{
    public:
        int meters;

        Distance(int meters){
            this->meters = meters;
        }
        
        Distance operator+(Distance d){
            return Distance(meters + d.meters);
        }
        bool operator==(Distance d){
            return meters == d.meters;
        }
        bool operator>(Distance d){
            return meters > d.meters;
        }
    };

int main(){
    Distance d1(100), d2(200);
    Distance d3 = d1+d2;
    cout << "d3: " << d3.meters << " meters" << endl;
    cout << boolalpha;
    cout << "------------" << endl;
    cout << "d1 == d2: " << (d1 == d2) << endl;
    cout << "------------" << endl;
    cout << "d1 > d2: " << (d1 > d2) << endl;
    cout << "------------" << endl;
    
    return 0;
}
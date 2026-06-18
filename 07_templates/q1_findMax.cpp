#include<iostream>
using namespace std;

template<typename T>
T findMax(T a, T b){
    if(a > b)
        return a;
    else
        return b;
}

int main(){
    cout << findMax(4,9) << endl;
    cout << findMax(5.5f, 6.7f) << endl;
    cout << findMax(1.7, 1.6) << endl;
    cout << findMax('a', 'A') << endl;
    cout << findMax(string("Hello!"), string("Damn!")) << endl;

    return 0;
}
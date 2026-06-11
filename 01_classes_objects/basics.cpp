#include<iostream>
using namespace std;

// Class = blueprint
class Student{
    public:
        string name;
        int age;
        int rollNo;

        void displayInfo(){
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Roll No : " << rollNo << endl;
        }
};

int main(){
    //  OBject = actual instance of the class
    Student s1;
    s1.name = "Ravi";
    s1.age = 20;
    s1.rollNo = 101;
    s1.displayInfo();

    cout << "---------------------" << endl;

    Student s2;
    s2.name = "Priya";
    s2.age = 21;
    s2.rollNo = 102;
    s2.displayInfo();

    return 0;
}
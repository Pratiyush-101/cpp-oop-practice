#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;
        int rollNo;

        Student(){
            name = "Unknown";
            age = 0;
            rollNo = 0;
        }

        Student(string name, int age, int rollNo){
            this->name = name;
            this->age = age;
            this->rollNo = rollNo;
        }

        ~Student(){
            cout << "Student object destroyed!" << endl;
        }

        void displayInfo(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll No: " << rollNo << endl;
        }
};

int main(){
    Student s1("Riya", 18, 35 );
    s1.displayInfo();

    cout << "----------------" << endl;

    Student s2;
    s2.displayInfo();

    return 0;
}
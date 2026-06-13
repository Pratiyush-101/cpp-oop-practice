#include<iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(string name, int age){
            this->name = name;
            this->age = age;
        }

        void showPerson(){
            cout << "The person name is: " << name << " and their age is: " << age << endl;
        }
};

class Employee:public Person{
    public:
        string company;
        int salary;

        Employee(string name, int age, string company, int salary):Person(name, age){
            this->company = company;
            this->salary = salary;
        }

        void showEmployee(){
            cout << name << " works in " << company << " and gets a salary of " << salary << " $ per annum." << endl; 
        }
};

class Manager:public Employee{
    public:
        string department;

        Manager(string name, int age, string company, int salary, string department):Employee(name, age, company, salary){
            this->department = department;
        }

        void showManager(){
            cout << "The name of the manager is: " << name << ", his department is " << department << " and his salary is: " << salary << " $ per annum." << endl;
        }

};

int main(){
    Manager m1("Kevin", 30, "Amazon", 30000, "Tech");
    m1.showPerson();
    m1.showEmployee();
    m1.showManager();

    return 0;
}
#include<iostream>
using namespace std;

class Student{
    private:
        int rollNo, marks;
    protected:
        string name;
    public:

        Student(int rollNo, int marks, string name){
            this->rollNo = rollNo;
            this->marks = marks;
            this->name = name;
        }

        void showInfo(){
            cout << "Roll No: " << rollNo << endl;
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
        }

        int getRollNo(){
            return rollNo;
        }

        int getMarks(){
            return marks;
        }

        void setMarks(int m){
            if(m >= 0 && m <= 100){
                marks = m;
                cout << "Marks updated to: " << marks << endl;
            }
            else{
                cout << "Invalid marks!" << endl;
            }
        }
};

int main(){
    Student s1(46,97,"Peter");
    s1.showInfo();
    cout << "-------------" << endl;
    s1.setMarks(95);
    s1.setMarks(105);
    cout << "Marks: " << s1.getMarks() << endl;

    return 0;
}
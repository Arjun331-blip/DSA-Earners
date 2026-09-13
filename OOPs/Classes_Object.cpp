#include <iostream>
using namespace std;

class Student{
    public: 
    string name;
    int rollNo;
    float cgpa;
    Student(string name, int rollNo, float cgpa){
        name = name;
        rollNo = rollNo;
        cgpa = cgpa;
        cout << name << rollNo << cgpa;
    }
    // Student(){  // defaulet constructor
    //     cout << "Hello Guys";
    // }
};

int main() {
    Student x("Arjun", 51, 6.5);
    // Student x;
    // cout << "Name : " << x.name << " Roll No. : " << x.rollNo << " CGPA : " << x.cgpa << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "enter your age : ";
    cin>> year;
    if(year >= 18){
        cout << "you are eligible for driving.";
    } else cout << "you cannot drive.";
    return 0;
}
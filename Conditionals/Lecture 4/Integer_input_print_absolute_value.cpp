#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number integer: ";
    cin >> number;
    if(number < 0) number *= -1;
    cout << "the number is absolute "<< number;

    // if(number < 0){
    //     cout << "this number is absolute "<<abs(number);
    // } else cout << "the number is before absolute.";
    return 0;
}
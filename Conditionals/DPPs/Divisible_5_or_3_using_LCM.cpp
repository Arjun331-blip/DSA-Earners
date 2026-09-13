#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "enter the number : ";
    cin >> number;
    if(number%15 == 0)
        cout << "this number is divisible by 5 and 3";
    else    
        cout << "this number is not divisible by 5 and 3";
    return 0;
}
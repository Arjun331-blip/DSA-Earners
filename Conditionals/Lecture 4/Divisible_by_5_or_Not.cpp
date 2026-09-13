#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number for divisible by 5 or not: ";
    cin >> number;
    if(number%5 == 0){
        cout << "the number is divisible by 5.";
    } else cout << "the number is not divisible by 5.";
    return 0;
}
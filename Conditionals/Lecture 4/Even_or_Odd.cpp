#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number for even or odd: ";
    cin >> number;
    if(number%2 == 0){
        cout << "this number is even.";
    } else cout << "this number is odd.";
    return 0;
}
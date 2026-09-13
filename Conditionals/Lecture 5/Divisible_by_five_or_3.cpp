#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number: ";
    cin >> n;
    if(n%5 == 0 || n%3 == 0)
        cout << "this number is divisible by 5 or 3.";
    else cout << "this number is not divisible by 5 or 3.";
    return 0;
}
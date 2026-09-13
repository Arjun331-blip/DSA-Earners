#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    int sum =0;
    while(n){
        int lastDigit = n%10;
        sum += lastDigit;
        n = n/10;
    }
    cout << sum;
    return 0;
}
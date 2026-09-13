#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    int product = 1;
    while(n != 0){
        int rem = n%10;
        product *= rem;
        n = n/10;
    }
    cout << product;
    return 0;
}
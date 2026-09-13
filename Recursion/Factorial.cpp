#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1) return 1;
    int ans = n * factorial(n-1);
    return ans;
}

int main() {
    int n;
    cout << "enter the number : ";
    cin >> n;
    cout << n << " of a factorial : " << factorial(n);
    return 0;
}
#include <iostream>
using namespace std;

// int power(int a, int b){
//     if(b == 1) return a;
//     return a * power(a, b-1);
// }

/// logarithmic time complexity : binary exponentiation

int power(int x, int n){
    if(n <= 1) return x;
    int ans = power(x, n/2) * power(x, n/2);
    return ans;
}

int power(int x, int n){
    if(n <= 1) return x;
    int ans = power(x, n/2);
    return (n%2 == 0)? ans * ans : ans * ans * x;
}

int main() {
    int x, n;
    cout << "enter the number of x : ";
    cin >> x;
    cout << "enter the number of n : ";
    cin >> n;
    cout << "power : " << power(x,n);
    return 0;
}



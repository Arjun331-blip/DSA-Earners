#include <iostream>
using namespace std;

// using global variable to print the number from 1 to n
// int n;
// void print1ToN(int x){
//     if(n < x) return;  // base case
//     cout << x << " ";  // work 
//     print1ToN(x+1);    // function calling
// }                           

// using two parameter to print number from 1 to n
void print1ToN(int n, int x){
    if(n < x) return;   // base case
    cout << x << " ";   // work 
    print1ToN(n, x+1);  // function calling
}

// without extra using parameter to print number from 1 to n
void print1ToN(int n){
    if(n == 0) return;  // base case
    print1ToN(n-1);  // function callin itself
    cout << n << " ";  // work
}

int main() {
    int n;
    cout << "enter number : ";
    cin >> n;
    // print1ToN(1);
    // print1ToN(n, 1);
    print1ToN(n);
    return 0;
}
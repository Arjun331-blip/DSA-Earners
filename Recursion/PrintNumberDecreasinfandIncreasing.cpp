#include <iostream>
using namespace std;

void decrease_increase(int n){
    if(n == 0) return ;
    cout << n << " ";
    decrease_increase(n-1);
    if(n > 1) 
    cout << n << " ";
}

int main() {
    int n ;
    cout << "enter the number : ";
    cin >> n;
    decrease_increase(n);
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "enter a number of n : ";
    cin >> n;
    if(n <= 1) {
        cout << "this number is not prime factor";
        return 0;
    }
    for(int i=2;i<=n;i++) {
        while(n%i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    return 0;
}
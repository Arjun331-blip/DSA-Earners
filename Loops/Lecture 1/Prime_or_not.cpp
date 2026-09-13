#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number n : ";
    cin >> n;
    for(int i=2;i<=n-1;i++){
        if(n%i == 0){
            cout << "the number is prime " << n;
            break; 
        } 
    }
    cout << "the number is not prime " << n;
    return 0;
}
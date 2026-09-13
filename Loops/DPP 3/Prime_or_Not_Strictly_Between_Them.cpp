#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "enter a number of a and b : ";
    cin >> a >> b;
    for(int i=a+1;i<=b-1;i++) {
        if(i <= 1) continue;
        bool isPrime = true;

        for(int j=2;j<=i/2;j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime){
            cout << i << " ";
        }
    }
    return 0;
}
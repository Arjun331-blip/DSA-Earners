#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    int n2 = n;
    int rev =0;
    while(n){
        rev *= 10;
        rev += n%10;
        n /= 10;
    }
    cout << rev + n2;
    return 0;
}
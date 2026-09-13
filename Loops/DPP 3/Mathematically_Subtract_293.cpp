#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number of n : ";
    cin >> n;
    int n1 = n - 293;
    int rev = 0;
    while(n1 != 0){
        rev *= 10;
        rev += n1%10;
        n1 = n1 / 10;
    }
    cout << "reversed : " << rev;
    return 0;
}
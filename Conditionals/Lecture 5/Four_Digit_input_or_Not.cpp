#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if((n >= 1000 && 9999 >= n) || (n <= -1000 && -9999 <= n))
        cout << "this is four digit number.";
        else cout << "this is not four digit number.";
    return 0;
}
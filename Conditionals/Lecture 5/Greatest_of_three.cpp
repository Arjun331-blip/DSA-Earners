#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "enter the number of a : ";
    cin >> a;
    cout << "enter the number of b : ";
    cin >> b;
    cout << "enter the number of c : ";
    cin >> c;
    if(a>b && a>c)
        cout << "greatest number of a";
    else if(b>c && b>a)
        cout << "greatest number is b";
        else cout << "greatest number is c";
    return 0;
}
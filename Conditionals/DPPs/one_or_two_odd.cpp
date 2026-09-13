#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "enter the two number x and y: ";
    cin >> x >> y;
    if(x%2 == 1 && y%2 == 1)
        cout << "both are odd";
    else if(x%2 == 1 || y%2 == 1)
        cout << "one are odd";
    else 
        cout << "none is odd";
    return 0;
}
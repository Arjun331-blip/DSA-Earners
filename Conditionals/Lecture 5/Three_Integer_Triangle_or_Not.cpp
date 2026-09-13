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
    if(a+b > c && b+c > a && a+c > b)
        cout << "this is valid triangle.";
    else cout << "this is not valid triangle.";
    return 0;
}
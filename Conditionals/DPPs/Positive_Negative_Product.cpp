#include <iostream>
#include <climits>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the two number x and y : ";
    cin >> x >> y;
    int mul = x*y;
    if(mul >=1 && mul <= INT_MIN)
        cout << "multiplication of positive integer " << mul;
    else 
        cout << "multiplication of Negative integer " << mul;
    return 0;
}
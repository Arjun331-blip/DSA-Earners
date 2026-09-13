#include <iostream>
using namespace std;

int main() {
    int x = 7;
    int *ptr = &x;
    *ptr = 90;
    cout << x;
    return 0;
}
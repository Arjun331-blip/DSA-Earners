#include <iostream>
using namespace std;

int main() {
    float n;
    cout << "Enter the number : ";
    cin >> n;
    int y = (int)n;
    if(n == float(y)) cout << "the number is integer";
    else cout << "the number is not integer";
    return 0;
}
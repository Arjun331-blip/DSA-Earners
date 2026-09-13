#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number : ";
    cin >> n;

    int sum = (n-2) * 180;
    if((sum > 0 && sum >= 180) || sum <= 360)
        cout << "Valid polygon " << sum;
    else 
        cout << "Not valid polygon " << sum;
    return 0;
}
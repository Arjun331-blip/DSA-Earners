#include <iostream>
using namespace std;

int main() {
    double a;
    int b;
    cout << "enter a number of a and b : ";
    cin >> a >> b;
    double ans = 1;
    int original_b = b;
    long long positive_b = b;
    if(positive_b < 0){
        positive_b = -positive_b;
    }
    for (int i = 1; i <= positive_b; i++) {
        ans = ans * a;
    }
    if(positive_b < 0){
        if(a == 0) {
        cout << "value of b is 1";
        return 0;
        }
    }  
    cout << a << " raised to the power " << original_b << " is: " << ans << endl;
    return 0;
}
// // using naive approach
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "enter the number: ";
//     cin >> n;
//     if(n%2 == 0)
//         cout << "the number is even.";
//     else cout << "the number is odd.";
    
//     return 0;
// }


// using bitwise operator
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number: ";
    cin >> n;
    if(n&1 == 1)
        cout << "the number is odd.";
    else cout << "the number is even.";
    
    return 0;
}
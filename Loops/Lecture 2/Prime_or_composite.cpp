#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    // int factor = 0;
    // for(int i=1;i<=n;i++){
    //     if(n%i == 0) {
    //         factor++;
    //         // cout << i << " ";
    //     }
    // }

    // if(factor == 1) cout << "Neither prime nor composite";
    // else if(factor >= 3) cout << "composite number";
    // else cout << "prime number";

    // int flag = false;
    // for(int i=2;i<=n-1;i++){
    //     if(n%i == 0) {
    //         flag = true;
    //         break;
    //     }
    // }

    // if(n == 1) cout << "Neither prime nor composite";
    // else if(flag == true) cout << "composite number";
    // else cout << "prime number";


    int flag = false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0) {
            flag = true;
            break;
        }
    }

    if(n == 1) cout << "Neither prime nor composite";
    else if(flag == true) cout << "composite number";
    else cout << "prime number";
    return 0;
}
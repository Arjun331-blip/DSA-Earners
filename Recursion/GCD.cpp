#include <iostream>
using namespace std;

// using for loop
// int hcf(int x, int y){
//     for(int i=min(x,y);i>=1;i--){
//         if(x%i == 0 && y%i == 0) return i;
//     }
//     return 1;
// }

// using recursion
int hcf(int x, int y){
    if(x <= 1) return 1;
    return hcf(y%x, x);
}

int main() {
    int a = 24, b = 60;
    cout << "GCD : " << hcf(a, b);
    return 0;
}
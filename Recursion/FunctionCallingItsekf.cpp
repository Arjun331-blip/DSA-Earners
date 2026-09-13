#include <iostream>
using namespace std;

// void deeksha(int n){
//     if(n == 0) return;
//     cout << "deeksha " << n << endl;
//     deeksha(n-1);
// }  // 3 time deeksha

void deeksha(int n){
    cout << "deeksha " << n << endl;
    if(n == 0) return;
    deeksha(n-1);
}   // 4 time deeksha

int main() {
    deeksha(3);
    return 0;
}
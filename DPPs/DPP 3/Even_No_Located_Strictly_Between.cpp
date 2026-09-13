#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "enter a number a and b : ";
    cin >> a >> b;
    
    if(a < b){
        for(int i=a+1;i<=b-1;i++){
            if(i%2 == 0){
            cout << i << " ";
            }
        }
    } else {
        cout << "the number is a greater than of b.";
    }
    return 0;
}
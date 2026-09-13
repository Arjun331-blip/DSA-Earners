#include <iostream>
using namespace std;

void printEven(int start, int end){
    cout << "Even between two number : "
    for(int i=start;i<end;i++){
        if(i%2 == 0){
            cout << i << " ";
        }
    }
}

int main() {
    int a, b;
    cout << "enter the number of 2 a and b : ";
    cin >> a >> b;
    printEven(a, b);
    return 0;
}
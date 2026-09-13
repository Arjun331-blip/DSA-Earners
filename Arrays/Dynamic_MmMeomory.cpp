#include <iostream>
using namespace std;

int main() {
    // int arr[9]; // static allocation
    int* arr = new int[9];
    for(int i=0;i<8;i++){
        arr[i] = i+2;
    }

    for(int i=0;i<8;i++){
        cout << arr[i] << " ";
    }

    return 0;
}
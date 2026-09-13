#include <iostream>
using namespace std;

void change(int y[]) {
    y[0] = 20;
    y[1] = 8;
}

int main() {
    int arr[] {2,6,3,87,1,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 8;
    change(arr);
    cout << arr[0] << endl;      
    cout << arr[1] << endl;      
    return 0;
}
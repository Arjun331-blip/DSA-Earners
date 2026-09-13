#include <iostream>
using namespace std;

int main() {
    int arr[] {2,6,3,87,1,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    return 0;
}
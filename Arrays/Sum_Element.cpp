#include <iostream>
using namespace std;

int main() {
    int arr[] {2,6,3,87,1,4,2,5};
    int sum = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    cout << "Sum : " << sum;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[] {2,6,3,87,1,4,2,5};
    int max = -1;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i] > max) max = arr[i];
    }
    cout << "Max : " << max;
    return 0;
}
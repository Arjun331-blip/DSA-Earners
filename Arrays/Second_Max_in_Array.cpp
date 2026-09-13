#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] {2,6,3,87,1,4,5};
    int max = INT_MIN;
    int secondMax = INT_MIN;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i] > max){ 
            max = arr[i];
        }
    }

    for(int i=0;i<size;i++){
        if(arr[i] != secondMax && secondMax < arr[i]) {
        secondMax = arr[i];
        }
    }
    cout << "Second Max : " << secondMax;
    return 0;
}
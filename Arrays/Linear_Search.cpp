#include <iostream>
using namespace std;

int main() {
    int arr[] = {76, 8,6,32,3,2, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 7;
    for(int i=0;i<size;i++){
        if(arr[i] == target) cout << "this element lie in the array";
    }


    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int firstRepeatedElement(vector<int> &arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
               return arr[i]; 
            }
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {10, 5, 3, 4, 3, 5, 6};
    // vector<int> arr = {4, 2, 8};
    int n = arr.size();
    int repeat = firstRepeatedElement(arr, n);
    cout << "first repeated element in an array. " << repeat;
    return 0;
}
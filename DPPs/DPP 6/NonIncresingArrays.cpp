#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {8, 5, 5, 2};
    // vector<int> arr = {4, 2, 8};
    int n = arr.size();
    bool flag = false;
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            flag = true;
            // break;
        } else flag = false;
    }
    if(flag == true){
        cout << "array in the non incresing order. true";
    } else {
        cout << "array in the non incresing order. false";
    }
    return 0;
}
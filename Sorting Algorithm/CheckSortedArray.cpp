#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,6,5,7,8};
    // vector<int> arr = {1,2,3,4,5,6,7,8};
    int n = arr.size();
    bool flag = false;
    for(int i=0;i<n-1;i++){
        if(arr[i] < arr[i+1]){
            flag = true;
        } else{
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout << "given array is sorted.";
    } else {
        cout << "given array is not sorted";
    }
    return 0;
}
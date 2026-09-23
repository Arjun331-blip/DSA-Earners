#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(vector<int> &arr, int target){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return true;
        } 
    }
    return false;
}

int main() {
    vector<int> arr = {23, 76, 56, 34, 99, 21, 12, 52,5};
    int n = arr.size();
    int target = 52;
    // bool flag = false;
    // for(int i = 0; i < n; i++){
    //     if(arr[i] == target){
    //         flag = true;
    //         break;
    //     }
    // }
    if(linearSearch(arr, target)){
        cout << "Element has found";
    } else {
        cout << "Element has not found";
    }
    return 0;
}
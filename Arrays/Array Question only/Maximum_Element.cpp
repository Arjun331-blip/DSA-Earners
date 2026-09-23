#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;

void maxElement(vector<int> &arr){
    int n = arr.size();
    // int maxi = INT_MIN;
    // 1
    // for(int i = 0; i < n; i++){
    //     if(arr[i] > maxi) maxi = arr[i];
    // }

    // 2
    int maxi = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > maxi) maxi = arr[i];
    }
    cout << "Maximum Element : " << maxi << endl;
}

int main() {
    // vector<int> arr = {-34, -67, -45, -98, -23, -67, -5, -4, -89};
    vector<int> arr = {34, 67, 45, 98, 23, 67, 5, 4, 89};
    
    maxElement(arr);
    return 0;
}
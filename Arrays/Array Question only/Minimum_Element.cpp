#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

void MinimumElement(vector<int> &arr){
    int n = arr.size();
    // 1
    // int mini = arr[0];
    // for(int i = 1; i < n; i++){
    //     if(arr[i] < mini) mini = arr[i];
    // }
    // 2

    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < mini) mini = arr[i];
    }
    cout << "Minimum Element : " << mini;
}

int main() {
    vector<int> arr = {23, 76, 56, 34, 99, 21, 12, 52,5};
    MinimumElement(arr);
    return 0;
}
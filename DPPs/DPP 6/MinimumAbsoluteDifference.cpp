#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// 10 5 15 2
int main() {
    vector<int> arr = {10, 20, 15, 30, 28};
    for(int i=0;i<arr.size()-1;i++){
        arr[i] -= arr[i+1];
        arr[i] = abs(arr[i]); 
    }
    arr.pop_back();
    int min = INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i] < min){
             min = arr[i];
        }
    }
    cout << "Minimum Absolute Difference : " << min ;
    return 0;
}
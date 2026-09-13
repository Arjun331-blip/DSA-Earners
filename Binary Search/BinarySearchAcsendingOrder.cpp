#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int target){
    int n = arr.size();
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] > target) high = mid - 1;
        else if(arr[mid] < target) low = mid + 1;
        else  return mid;
    }
    return -1;
}

int main() {
    vector<int> arr = {-1,0,3,5,9,12};
    // int target = 9 ;
    int target = 2;
    cout << binarySearch(arr, target);
    return 0;
}
#include <iostream> 
#include <vector> 
using namespace std;

int binarySearchDescending(vector<int> &arr, int target){
    int n = arr.size();
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] > target) low = mid + 1;
        else if(arr[mid] < target) high = mid - 1;
        else  return mid;
    }
    return -1;
}

int main() {
    vector<int> arr = {179, 124, 120, 99, 87, 79, 44, 22, 19, 4};
    int target = 44;
    cout << binarySearchDescending(arr, target);
    return 0;
}
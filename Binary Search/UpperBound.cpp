#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1,3,3,4,7,8,9};
    int n = arr.size();
    int target = 6;
    int ub = 0;
    int low = 0, high = n - 1;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(arr[mid] < target) low = mid + 1;
        else if(arr[mid] > target){
            ub = mid;
            high = mid - 1;
        }
    }
    cout << ub;
    return 0;
}
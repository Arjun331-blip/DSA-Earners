#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 8, 1, 9};
    // vector<int> arr = {4, 2, 8};
    int n = arr.size();
    int target = 6;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] < target){
            count++;
        }
    }
    cout << "all element less than target. " << count;
    return 0;
}
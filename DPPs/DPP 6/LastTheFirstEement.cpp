#include <iostream>
#include <vector>
using namespace std;

int firstRepeatedElement(vector<int> &arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
               return arr[i]; 
            }
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {5, 9, 2};
    // vector<int> arr = {4, 2, 8};
    int n = arr.size();
    vector<int> ans;
    int difference = 0;
    for(int i=0;i<n;i++){
        difference = arr[i] - arr[i+1];
        ans.push_back(abs(difference));
    }
    difference = arr[0] = arr[n-1];
    ans.push_back(abs(difference));
    for(int ele : ans){
        cout << ele << " ";
    }
    return 0;
}
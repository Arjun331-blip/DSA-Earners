#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    vector<int> arr = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int n = arr.size();
        int i = 0, j = n-1;
        while(i<j) {
            if(arr[i] == 0){
                i++;
            } else if(arr[j] == 1){
                j--;
            } else {
                swap(arr[i], arr[j]);
                i++;
                j--; 
            }
        }
        // cout << "Hello";


        // vector<int> arr = {1,2,3,4,5};
        // int n = arr.size();
        // int i = 0, j = 1;
        // while(i < j && j < n){
        //     swap(arr[i], arr[j]);
        //     i += 2;
        //     j += 2;
        // }
    for(int ele : arr) cout << ele << " ";
     return 0;
}
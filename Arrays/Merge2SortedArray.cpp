#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr1 = {10, 20, 40, 70, 90, 100};
    int m = arr1.size();
    vector<int> arr2 = {30, 50, 60, 80};
    int n = arr2.size();
    vector<int> arr(m+n);
    // int i = 0, j = 0, k = 0;
    // while(i < m && j < n){
    //     if(arr1[i] > arr2[j]){
    //         arr[k++] = arr2[j++];
    //     } else {
    //         arr[k++] = arr1[i++];
    //     }
    // }

    // while(j < n){
    //     arr[k++] = arr2[j++]; 
    // }
    // while(i < m){
    //     arr[k++] = arr1[i++];
    // }

    //  to solve using th iterate reverse for loop
    int i = m-1, j = n-1, k = m+n-1;
     while(i >= 0 && j >= 0){
        if(arr1[i] > arr2[j]){
            arr[k--] = arr1[i--];
        } else {
            arr[k--] = arr2[j--];
        }
    }

    while(j >= 0){
        arr[k--] = arr2[j--]; 
    }
    while(i >= 0){
        arr[k--] = arr1[i--];
    }
    for(int ele : arr){
        cout << ele << " ";
    }
    return 0;
}
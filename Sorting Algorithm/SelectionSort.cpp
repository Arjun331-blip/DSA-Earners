#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void print(vector<int> &arr){
    for(int ele : arr){
        cout << ele << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {7,4,9,1,3,6,2,5};
    int n = arr.size();
    print(arr);
    // sort array using bubble sort
    for(int i=0;i<n-1;i++){
        int index = i, min = arr[i];
        for(int j=i;j<n;j++){
            if(arr[j] < min){
                min = arr[j];
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }
    print(arr);
    return 0;
}
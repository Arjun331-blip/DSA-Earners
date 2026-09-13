#include <iostream>
#include <vector>
#include <climits>
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
    int k = 0;
    for(int i=n-1;i>=0;i--){
        int index = i, max = arr[i];
        for(int j=0;j<n-k-1;j++){
            if(arr[j] > max){
                max = arr[j];
                index = j;
            }
        } k++;
        cout << max << " ";
        swap(arr[index], arr[i]);
    }
    cout << endl;
    print(arr);
    return 0;
}
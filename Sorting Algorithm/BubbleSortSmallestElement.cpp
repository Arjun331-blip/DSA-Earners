#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &arr){
    for(int ele : arr){
        cout << ele << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2,1,4,3,5};
    int n = arr.size();
    print(arr);
    // first sorted smallest element
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(arr[j] > arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
        }
    }
    print(arr);
    return 0;
}
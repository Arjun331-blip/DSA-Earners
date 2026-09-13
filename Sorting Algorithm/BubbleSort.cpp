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
    vector<int> arr = {6,9,4,2,3,8};
    int n = arr.size();
    print(arr);
    // here are write algorithm sort a array using bubble sort algorithm
    for(int i=1;i<n;i++){
        int countSwaps = 0;
        int swaps = 0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j+1], arr[j]);
                swaps++;
                countSwaps++;
            } 
        }
        cout << i << "th count to swaps element : " << countSwaps << endl;
        if(swaps == 0) break;
    }
    print(arr);
    return 0;
}
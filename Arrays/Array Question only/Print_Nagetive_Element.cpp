#include <iostream>
#include <vector>
using namespace std;

void nagetiveElement(vector<int> &arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            cout << arr[i] << " ";
        }
    }
}

int main() {
    vector<int> arr = {34, -67, 45, 98, -23, -67, 5, -4, 89};
    nagetiveElement(arr);
    return 0;
}
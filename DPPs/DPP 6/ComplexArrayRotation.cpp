#include <iostream>
#include <vector>
using namespace std;

void complexRotation(vector<int> &v, int i, int j){
    while(i < j){
        swap(v[i], v[j]);
        i++; j--;
    }
}

void complexRotationAnticlock(vector<int> &v){
    int y = v[0];
    for(int i=0;i<v.size()-1;i++){
        v[i] = v[i+1];
    }
    v[v.size()-1] = y;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int x = 2, y = 1;
    complexRotation(arr, 0, n-1);
    complexRotation(arr, 0, x-1);
    complexRotation(arr, x, n-1);
    complexRotationAnticlock(arr);
    for(int ele : arr){
        cout << ele << " ";
    }
    return 0;
}
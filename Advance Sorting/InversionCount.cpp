#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void inversionCount(vector<int> &arr1, vector<int> &arr2){
//     int count = 0;
//     for(int i = 0; i < arr1.size(); i++){
//         for(int j = 0; j < arr2.size(); j++){
//             if(arr1[i] > arr2[j]){
//                 count++;
//                 cout << "(" << arr1[i] << "," << arr2[j] << ") ";
//             }
//         }
//         cout << endl;
//     }
//     cout << "count : " << count ;
// }

void inversionCount(vector<int> &arr1, vector<int> &arr2){
    int count = 0, m = arr1.size(), n = arr2.size();
    int i = 0, j = 0;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    while(i < n && j < n){
        if(arr1[i] > arr2[j]){
            count += m - i;
            i++;
        }
    }
    cout << "count : " << count ;
}

int main() {
    vector<int> a = {5,2,11,8};
    vector<int> b = {3,7,1,-4,6};
    inversionCount(a, b);
    return 0;
}
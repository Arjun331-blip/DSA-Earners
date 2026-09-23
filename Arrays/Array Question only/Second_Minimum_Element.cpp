#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// void secondMaxiElement(vector<int> &arr){
//     int maxi = INT_MIN;
//     int n = arr.size();
//     for(int i = 0; i < n; i++){
//         if(arr[i] > maxi) maxi = arr[i];
//     }
//     int smaxi = INT_MIN;
//     for(int i = 0; i < n; i++){
//         if(arr[i] != maxi); {
//             if(arr[i] > smaxi && arr[i] != maxi)  smaxi = arr[i]; 
//         }
//     }
//     cout << "Maximum Element : " << maxi << " -> " << "Second Maximum Element : " << smaxi;
// }

void secondMaxiElement(vector<int> &arr){
    int maxi = INT_MIN;
    int n = arr.size();
    int smaxi = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxi) {
            smaxi = maxi;
            maxi = arr[i];
        } else if(arr[i] > smaxi && arr[i] != maxi)  smaxi = arr[i];
    }
    cout << "Maximum Element : " << maxi << " -> " << "Second Maximum Element : " << smaxi;
}

int main() {
    vector<int> arr = {23, 76, 56, 34, 99, 21, 12, 52,5};
    secondMaxiElement(arr);
    return 0;
}
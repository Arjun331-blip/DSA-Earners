#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[][4] = {
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                
            };
    // find maximum element in 2d array
    int max = INT_MIN;
    for(int i=0;i<3;i++){  // row
        for(int j=0;j<4;j++){  // column
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    cout << "Max : " << max;
    return 0;
}
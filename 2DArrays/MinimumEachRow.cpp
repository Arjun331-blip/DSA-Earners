#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[][4] = {
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},           
    };
// find the minimum element out of all the maximum elements of each row
    int maxElement = INT_MIN;
    for(int i=0;i<3;i++){
        int  minElement = INT_MAX;
        for(int j=0;j<4;j++){
            if(arr[i][j] < minElement){
                minElement = arr[i][j];
            }
        }
        maxElement = max(maxElement, minElement);
    }
    cout << "maximum element in each row: " << maxElement;
    return 0;
}
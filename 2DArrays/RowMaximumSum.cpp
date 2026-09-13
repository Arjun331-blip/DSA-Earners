#include <iostream>
using namespace std;

int main() {
    int arr[][4] = {
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                
            };
    // find th row with maximum sum
    int maxSum = -1, index = 0;
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
        maxSum = max(maxSum, sum);
        index = i;
    } 
    cout << "index : " << index << "Sum : " <<maxSum;
    return 0;
}
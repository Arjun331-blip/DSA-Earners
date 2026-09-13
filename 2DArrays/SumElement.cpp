#include <iostream>
using namespace std;

int main() {
    int arr[][4] = {
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                
            };
    // sum of all element 2d array
    int sum = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
    }
    cout << "Sum :  " <<sum;
    return 0;
}
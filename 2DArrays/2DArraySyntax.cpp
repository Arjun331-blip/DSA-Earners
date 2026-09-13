#include <iostream>
using namespace std;

int main() {
    // arrays of arrays
    // int arr1[][5]; //declaration of 2d arrays
    int arr[][4] = {
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16}
            };   // initialization and declaration
    
            // traverse 2d array
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
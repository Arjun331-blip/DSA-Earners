#include <iostream>
using namespace std;

int main() {
    int arr[][4] = {
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                
            };
    // print column wise array
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
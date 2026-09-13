#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 5, 20, 15};
    int evenIndexSum = 0, oddIndexSum = 0;
    for(int i=0;i<arr.size();i++){
        if(i%2 == 0){
            evenIndexSum += arr[i];
        } else{
            oddIndexSum += arr[i];
        }
    }
    int diff = evenIndexSum - oddIndexSum;
    cout << "Difference : " << diff;
    return 0;
}
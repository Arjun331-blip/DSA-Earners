#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// 10 5 15 2
int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1};
    int n = arr.size();
    int onces = 0;
    for(int i =0;i<n;i++){
        if(arr[i] == 1){
            onces++;
        } else {
            onces = 0;
        }
    }
    cout << "Maximum Consecutive Onces : " << onces;
    return 0;
}
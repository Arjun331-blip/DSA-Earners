#include <iostream>
#include <vector>
using namespace std;

void printRec(vector<int> &arr, int index){
    if(index == arr.size()) return;
    printRec(arr, index+1);
    cout << arr[index] << " ";
}
int main() {
    vector<int> arr = {5,8,43,54,2335,363,565};
    printRec(arr, 0);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void sumElement(vector<int> &arr){
    int n = arr.size();
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout << "Sum : " << sum << endl;
}

void evenSumElement(vector<int> &arr){
    int n = arr.size();
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]%2 == 0){
            sum += arr[i];
        }
    }
    cout << "Even Sum : " << sum << endl;
}

void oddSumElement(vector<int> &arr){
    int n = arr.size();
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]%2 == 1){
            sum += arr[i];
        }
    }
    cout << "Odd Sum : " << sum << endl;
}

int main() {
    vector<int> arr = {34, 67, 45, 98, 23, 67, 5, 4, 89};
    sumElement(arr);
    evenSumElement(arr);
    oddSumElement(arr);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void productElement(vector<int> &arr){
    int n = arr.size();
    long long prod = 1;
    for(int i = 0; i < n; i++){
        prod *= arr[i];
    }
    cout << "Product : " << prod << endl;
}

void evenproductElement(vector<int> &arr){
    int n = arr.size();
    long long prod = 1;
    for(int i = 0; i < n; i++){
        if(arr[i]%2 == 0) prod *= arr[i];
    }
    cout << "Even Product : " << prod << endl;
}

void oddproductElement(vector<int> &arr){
    int n = arr.size();
    long long prod = 1;
    for(int i = 0; i < n; i++){
        if(arr[i]%2 == 1) prod *= arr[i];
    }
    cout << "Odd Product : " << prod << endl;
}

int main() {
    vector<int> arr = {34, 67, 45, 98, 23, 67, 5, 4, 89};
    productElement(arr);
    evenproductElement(arr);
    oddproductElement(arr);
    return 0;
}
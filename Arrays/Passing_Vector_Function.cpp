#include <iostream>
#include <vector>
using namespace std;

// array is pass by reference
void change(vector<int> &v){ // vector is pass by value
    v[2] = 99;
}

int main() {
    vector<int> vec = {4,7,8,3,2};
    change(vec);
    cout << vec[2];
    
    
    return 0;
}
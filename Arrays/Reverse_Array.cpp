#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &v){
    for(int i=0;i<v.size();i++){
        v[(v.size()-i-1)/2] = v[i];
    }
    for(int ele : v) cout << ele << " ";
}

int main() {
    vector<int> vec = {10, 20, 30, 40, 50, 60, 70};
    reverse(vec);
    
    return 0;
}
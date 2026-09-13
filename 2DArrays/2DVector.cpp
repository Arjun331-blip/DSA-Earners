#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1,2,3,4};
    vector<int> v2 = {3,4};
    vector<int> v3 = {1,2,3,4};
    vector<int> v4 = {4};
    // vector<vector<int>> vec = {v1, v2, v3, v4};
    vector<vector<int>> vec(4,vector<int>(4, 0));
    // vec.push_back(v1);
    // vec.push_back(v2);
    // vec.push_back(v3);
    // vec.push_back(v4);
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout << vec[i][j] << " ";
       }
       cout <<endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec(7);
    vec.push_back(1);
    cout << vec.size() << " " << vec.capacity();
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.push_back(9);
    // for(int i=0;i<vec.size();i++){
    //     cout << vec[i] << " ";
    // }
    cout << vec.capacity();
    return 0;
}
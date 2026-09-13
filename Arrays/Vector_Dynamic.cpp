#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector<int> vec = {1,4,6,2,4};
    // vector<int> vec(5, 18); // fixed value in every element
    vector<int> vec;
    vec.push_back(5);
    vec.push_back(5);
    vec.push_back(5);
    vec.push_back(5);
    vec.push_back(5);
    vec.pop_back();
    cout << vec.capacity();
    return 0;
}
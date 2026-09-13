#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> vec = {4, 1, 9, 7, 2};
    int max = INT_MIN;
    int secondMax = INT_MIN;
    int thirdMax = INT_MIN;
    for(int i=0;i<vec.size();i++){
        if(vec[i] > max){
            thirdMax = secondMax;
            secondMax = max;
            max = vec[i];
        } if(vec[i] > secondMax && vec[i] != max){
            thirdMax = secondMax;
            secondMax = vec[i];
        }
        if(vec[i] > thirdMax && vec[i] != secondMax){
            thirdMax = vec[i];
        }
    } 
    cout <<thirdMax;
    return 0;
}
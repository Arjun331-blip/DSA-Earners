#include <iostream>
using namespace std;

int climbingStair(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    return climbingStair(n-1) + climbingStair(n-2);
}

int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    cout << "Number of Steps of to pass of stair : " << climbingStair(n);
    return 0;
}
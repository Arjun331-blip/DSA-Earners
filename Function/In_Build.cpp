#include <iostream>
#include <cmath>
#include <random>
using namespace std;

int main() {
    // cout << max(4,5);
    // cout << min(4,5);
    // cout << min(3,min(4,5));

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(1, 10);

    cout << distrib(gen);
    
    return 0;
}
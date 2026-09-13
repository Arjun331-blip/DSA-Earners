#include <iostream>
using namespace std;

void findMaximum(int a, int b, int c){
    int maxi = max(a, max(b, c));
    cout << "Maximun Number of Three : " << maxi;
}

int main() {
    int a, b, c;
    cout << "enter the number of 3 a, b and c : ";
    cin >> a >> b >> c;
    findMaximum(a, b, c);
    return 0;
}
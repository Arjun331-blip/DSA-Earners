#include <iostream>
#include <vector>
using namespace std;

void print(int n){
    if(n == 0) return ;
    cout << "Pre ";
    print(n-1);
    cout << "In ";
    print(n-1);
    cout << "Post ";
}

int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    print(n);
    return 0;
}
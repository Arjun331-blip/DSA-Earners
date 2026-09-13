#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    string s = to_string(n);
    cout << "total size of number : " << s.length();
    return 0;
}
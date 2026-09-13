#include <iostream>
#include <string>
using namespace std;

int main() {
    string x = "abc";
    string y = "xyz";
    if(x == y) cout << "Same" << endl;
    else cout << "Not Same" << endl;

    if(x > y) cout << x << " is Greater than " << y << endl;
    else cout << y << " is Greater than " << x << endl;
    return 0;
}
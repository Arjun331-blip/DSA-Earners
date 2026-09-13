#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Bhavya";
    cout << s.substr(0,3) << endl;  // start 0 and length 3
    cout << s.substr(2) << endl;  // start 2 and length end string
    cout << s.substr(1,4) << endl;  // start 1 and length 4
    return 0;
}
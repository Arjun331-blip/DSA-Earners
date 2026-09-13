#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string name = "Arjun";
    // name.push_back('k');
    // name.pop_back();
    // sort(name.begin(), name.end());
    reverse(name.begin(), name.end());
    cout << name;
    return 0;
}
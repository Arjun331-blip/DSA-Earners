#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "arjun saroj";
    cout << name[0] << endl;
    name[0] = 'S';
    cout << name << endl;
    cout << name.size() << endl;
    return 0;
}
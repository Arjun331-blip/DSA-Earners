#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "Arjun Saroj is a Student";
    cout << name << endl;
    string x;
    // cin >> x;
    // cout << x << endl;
    getline(cin, x);
    cout << x;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Arjun saroj";
    int n = name.size();
    // traversal on string using loop
    // for(int i=0;i<n;i++){
    //     cout << name[i] ;
    // }

    // traversal on string using for each loop
    for(char ele : name) cout << ele;
    return 0;
}
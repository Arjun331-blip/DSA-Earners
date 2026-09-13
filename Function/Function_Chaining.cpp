#include <iostream>
using namespace std;

void sumit(){
    cout << "HII Sumit" << endl;
}

void arjun(){
    cout << "HII Arjun" << endl;
    sumit();
}

void anu(){
    cout << "HII Anu" << endl;
    arjun();
}

int main() {
    anu();
    return 0;
}
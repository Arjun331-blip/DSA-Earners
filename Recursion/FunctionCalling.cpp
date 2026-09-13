#include <iostream>
using namespace std;
void param(){
    cout << "param" << endl;
    aryan();
}

void kartik(){
    cout << "kartik" << endl;
    param();
}

void aryan(){
    cout << "aryan" << endl;
}

int main() {
    kartik();
    param();
    aryan();
    return 0;
}
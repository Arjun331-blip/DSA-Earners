#include <iostream>
using namespace std;

void fun(int a){
    cout << a << endl;
    if(a > 20) return;
    cout << a*a << endl;
}

int main() {
    fun(27);
    return 0;
}
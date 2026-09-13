#include <iostream>
using namespace std;

void fun(int a, int b);

int main() {
    int a,b;
    fun(a,b);
    return 0;
}

void fun(int a, int b){
    cout << "enter a number : ";
    cin >> a >> b;
    cout << "sum : " << a+b;
}
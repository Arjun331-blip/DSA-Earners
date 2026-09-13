#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "enter the capital character value : ";
    cin >> ch;
    if(ch >= 65 && ch <= 90)
        cout << "this is capital character. "<< ch;
        else cout << "this is no capital character "<< ch;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "enter the cahracter : ";
    cin >> ch;
    if(ch >= 65 && ch <= 90)
        cout << "this is Capital character";
    else if(ch >= 97 && ch <= 122)
        cout << "this is small character";
    else if (ch >= 49 && ch <= 57)
        cout << "this is numeric character";
    else 
        cout << "this is special character";
    return 0;
}
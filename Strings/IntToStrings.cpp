#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    
    // while(n){
    //     int lastDigit = n%10;
    //     char ch = lastDigit + 48;
    //     s.push_back(ch);
    //     n  = n/10;
    // }
    // // reverse
    // int i = 0, j = s.size()-1;
    // while(i < j){
    //     swap(s[i], s[j]); i++; j--;
    // }
    // cout << s;


    // using built in function int to string
    string s = to_string(n);
    cout << s;
    return 0;
}
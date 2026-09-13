#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "enter even sequence of character : ";
    getline(cin, s);
    int n = s.length();
    int half = n/2;
    int i = 0, j = half - 1;
    while(i < j){
        swap(s[i], s[j]);
        i++; j--;
    }
    cout << s << endl;

    string s1;
    s1.push_back('a');
    s1.push_back('r');
    s1.push_back('j');
    s1.push_back('u');
    s1.push_back('n');
    cout << s1;
    return 0;
}
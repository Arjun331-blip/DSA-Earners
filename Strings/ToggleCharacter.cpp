#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Arjun Saroj";
    // toggle string
    for(int i = 0; i< s.size(); i++){
        char ch = s[i];
        if(ch >= 65 && ch <= 90){
             ch += 32; s[i] = ch;
        }
        else if(ch >= 97 && ch <= 122){
            ch -= 32; s[i] = ch;
        }
    }
    cout << s;
    return 0;
}
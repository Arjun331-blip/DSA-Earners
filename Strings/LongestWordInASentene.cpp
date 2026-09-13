#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Arjun is the  boy smartest";
    int n = s.length();
    int i =0, j = 0;
    int maxLen = 0;
    string s1 = "";
    while(j < n){
        if(s[j] != ' ') j++;
        else{
            int len = j - i;
            if(len > maxLen) {
                maxLen = max(len, maxLen);
                s1 = s.substr(i, len);
            }
            i = j;
            while(s[i] == ' ' && i < n){
                i++; j++;
            }
        }
    }
    int len = j - i;
    if(len > maxLen) {
         maxLen = max(len, maxLen);
        s1 = s.substr(i, len);
    }
    cout << maxLen << " " << s1;
    return 0;
}
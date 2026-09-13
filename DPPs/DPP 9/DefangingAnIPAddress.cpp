#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string defangIPaddr(string address) {
        string ans;
        int n = address.length();
        int i = 0;
        while(i < n){
            if(address[i] == '.'){
                ans += "[.]";
            } else ans += address[i];
            i++;
        }
        return ans;
}

int main() {
    string address = "1.1.1.1";
    string ans = defangIPaddr(address);
    cout << "ans : " << ans;
    return 0;
}
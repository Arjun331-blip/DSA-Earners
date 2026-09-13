#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "A man, a plan, a canal: Panama";
    // string s = "race a car";
    int n = s.length();
        string ans;
        for(int i=0;i<n;i++){
            if(int(s[i]) >= 97) ans.push_back(s[i]); 
            else if(int(s[i]) >= 65) ans.push_back(char(int(s[i]) + 32));
        }
        cout << ans  << endl;
        int n1 = ans.length();
        int i = 0, j = n1 - 1;
        bool flag = false;
        while(i <= j){
            if(ans[i] == ans[j]) {
                i++; j--; flag = true;
            } else if(ans[i] != ans[j]) {
                flag = false; i++; j--;
            }
        }
        if(flag == true) cout << "true";
        else cout << "false";
    return 0;
}
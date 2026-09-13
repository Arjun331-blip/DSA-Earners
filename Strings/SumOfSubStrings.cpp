#include <iostream>
using namespace std;

int main() {
    // methods 1
    // string s = "926";
    // int n = s.length();
    // int count = 0;
    // for(int i=0;i<n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         string s1 = s.substr(i,j);
    //         count += stoi(s1);
    //         cout << s1 << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "total count : " << count;


    // methods 2
    string s = "926";
    int n = stoi(s);
    int count = 0;
    while(n){
        int rem = n%10;
        count += rem;
        n = n/10;
    }
    cout << "total count : " << count;
    return 0;
}
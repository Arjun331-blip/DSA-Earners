#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

string biggerNumber(string s1, string s2){
    int i = 0;
    while(s1[i] == '0') i++;
    int s1_trim_of_zero = s1.size() - i;
    int j = 0;
    while(s2[j] == '0') j++;
    int s2_trim_of_zero = s2.size() - j;
    if(s1_trim_of_zero > s2_trim_of_zero) return s1;
    if(s1_trim_of_zero < s2_trim_of_zero) return s2;
    while(s1.length() && s1[i] == s2[j]){
        i++; j++;
    }
    if(s1[i] > s2[j]) return s1;
    if(s1[i] < s2[j]) return s2;
}

int main() {
    vector<string> arr = {"0123", "0023", "456", "00182", "940", "2901"};
    string max = arr[0];
    // for(int i=0;i<arr.size();i++){
    //     if(stoi(arr[i]) > stoi(max)) max = arr[i];
    // }
    // cout << max;

    // without built ins function
    // for(int i=1;i<arr.size();i++){
    //     if(stoll(arr[i]) > stoll(max)) max = arr[i];
    // }

    for(int i = 0; i < arr.size(); i++){
        max = biggerNumber(arr[i], max);
    } 

    cout << max;
    return 0;
}
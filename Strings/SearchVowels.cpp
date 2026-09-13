#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "enter a string in a sequence of character : ";
    getline(cin, s);
    int countVowels = 0;
    for(char ch : s){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        countVowels++;
    } 
    cout << countVowels;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number of n : ";
    cin >> n;
    int n1 = n;
    int rev = 0;
    while(n != 0){
        rev *= 10;
        rev += n%10;
        n = n/10;
    }
   
    if(n1 == rev){
        cout << "the number is a palindrome.";
    } else cout << "the number is a not palindrome.";
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number of n : ";
    cin >> n;
    int sum = 0, a = n;
    for(int i=1;i<=n-1;i++){
        if(n%i == 0){
            sum += i;
        }
    }
   
    if(sum == a){
        cout << "Perfect number.";
    } else {
        cout << "Not a Perfect number.";
    }
    return 0;
}
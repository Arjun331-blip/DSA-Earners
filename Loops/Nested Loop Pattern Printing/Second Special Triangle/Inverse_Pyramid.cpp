#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    for(int i=n;i>=1;i--){
        for(int k=1;k<=i*2-1;k++){
            cout << "* ";
        }
        cout << endl;
        for(int j=1;j<=n-i+1;j++){
            cout << "  ";
        }
    }
    return 0;
}
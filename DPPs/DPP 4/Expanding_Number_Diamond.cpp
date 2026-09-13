#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << "  ";
        }
        int a = i;
        for(int j=1;j<=i;j++){
            cout << a << " ";
            if(i>=j){
                a++;
            }            
        }
        int b = i;
        for(int j=1;j<=i-1;j++){
            cout << b << " ";
        }
        cout << endl;
    }
    return 0;
}
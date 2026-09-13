#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    for(int i=1;i<=n;i++){   // upper pyramid
        for(int j=1;j<=n-i;j++){
            cout << "  ";
        }
        for(int j=1;j<=i*2-1;j++){
            if(j == 1 || j == (i*2-1))
            cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    int n1 = n-1;
    for(int i=1;i<=n-1;i++){  // lower inverse pyramid
        for(int j=1;j<=i;j++){
            cout << "  ";
        }
        for(int j=1;j<=n1*2-1;j++){
            if(j == 1 || j == (n1*2-1))
            cout << "* ";
            else cout << "  ";
        }
        n1--;
        cout << endl;
    }
    return 0;
}
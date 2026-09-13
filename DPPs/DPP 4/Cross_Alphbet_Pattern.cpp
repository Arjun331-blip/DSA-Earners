#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i == j )
             cout << (char)(i+64) << " ";
             else cout << "  ";
        }
        for(int j=1;j<=n;j++){
            if(i+j == n+1)
             cout << (char)(i+64) << " ";
             else cout << "  ";
        }
        cout << endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-1;j++){
            if(i == j )
             cout << (char)(i+64) << " ";
             else cout << "  ";
        }
        for(int j=1;j<=n;j++){
            if(i+j == n+1)
             cout << (char)(i+64) << " ";
             else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
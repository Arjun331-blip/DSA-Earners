#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout << "enter a rows and column : ";
    cin >> m >> n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
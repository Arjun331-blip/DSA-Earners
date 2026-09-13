#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a numbr : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2 == 0) {
                if(j == n) continue;
                cout << " " << i;
            } 
            else  cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
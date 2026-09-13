#include <iostream>
using namespace std;

int main() {
    int K, a, b;
    cout << "enter a number of K : ";
    cin >> K;
    cout << "enter a number of a and b : ";
    cin >> a >> b;
    for(int i=a;i<=K;i++){
        for(int j=b;j<=K;j++){
            cout << i << " , " << j << endl;
        }
     
    }
    return 0;
}
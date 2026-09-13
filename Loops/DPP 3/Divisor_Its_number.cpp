#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number of n : ";
    cin >> n;
    int count = 0;
    for(int i=1;i<=n;i++){
        if(n%i == 0) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl << "count : " << count;
    return 0;
}
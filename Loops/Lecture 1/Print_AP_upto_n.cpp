#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number of n : ";
    cin >> n;
    // int a = 2;
    // int d = 3;
    // int an = (a+(n-1)*d);
    // for(int i=a;i<=an;i+=d){
    //     cout << i << " ";
    // }

    for(int i=2;i<=2+(n-1)*3;i+=3)
        cout << i << " ";
    return 0;
}
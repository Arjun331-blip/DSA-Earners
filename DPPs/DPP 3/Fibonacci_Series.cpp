#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number of n : ";
    cin >> n;
    int pre = 0, after = 1;
    int current = 0;
    for(int i=1;i<=n;i++){
        current = pre + after;
        pre = after;
        after = current;
        cout << current << " ";
    }
    return 0;
}
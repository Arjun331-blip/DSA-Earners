#include <iostream>
using namespace std;

int count = 0;
void uniquePaths(int n, int m, string s){
    if(n == 1 && m == 1){
        count += 1;
        cout << s  << " -> " << count << endl;
    }
    if(n == 0 || m == 0) return;
    uniquePaths(n-1, m, s+"R"); // right side
    uniquePaths(n, m-1, s+"D"); // down side
}

int main() {
    int row, col;
    cout << "enter a number rows and cols : ";
    cin >> row >> col;
    uniquePaths(row, col, "");
    return 0;
}
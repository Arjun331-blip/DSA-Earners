#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;       
    // method 1
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         int left = j;
    //         int top = i;
    //         int right = n-i+1;
    //         int bottom = n-j+1;

    //         int value = min({left, right, top, bottom});
    //         cout << value << " ";
    //     }
    //     cout << endl;
    // }




    // method 2
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i <= j) cout << i << " ";
    //         else cout << j << " ";
    //     }
    //     cout << endl;
    // }


    // method 3
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i <= j) cout << i << " ";
    //         else cout << j << " ";
    //     }
    //     for(int j=n-1;j>=1;j--){
    //         if(i <= j) cout << i << " ";
    //         else cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // for(int i=n-1;i>=1;i--){
    //     for(int j=1;j<=n-1;j++){
    //         if(i <= j) cout << i << " ";
    //         else cout << j << " ";
    //     }
    //     for(int j=n;j>=1;j--){
    //         if(i <= j) cout << i << " ";
    //         else cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // method 4
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a = i, b = j;
            if(i <= j) cout << i << " ";
            else cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // one way
    // for(int i=65, j=97;i<=90, j<=122;i++, j++){
    //     cout << "Capital letter = " << (char)i << " --> " << i << " ASCII value " << "Small letter = " << (char)j << " --> " << j  << endl;
    // }

    // two way
    for(int i=65;i<=90;i++){
        cout << "Capital letter = " << (char)i << " --> " << i << " ASCII value " << "Small letter = " << (char)((int)(i+32)) << " --> " << i+32  << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // one way
    // for(int i=19;i<=190;i++){
    //     if(i%19 == 0){
    //         cout << i << " ";
    //     }
    // }



    // second way 
    // for(int i=19;i<=190;i+=19){
    //     cout << i << " ";
    // }


    // third way
    for(int i=1;i<=10;i++){
        cout << 19 << " * " << i << " = " << i*19 << endl;
    }
    return 0;
}
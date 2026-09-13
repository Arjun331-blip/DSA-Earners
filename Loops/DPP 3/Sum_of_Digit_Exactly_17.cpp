#include <iostream>
using namespace std;

int main() {

    for(int i=1;i<=1000;i++){
        int sum = 0;
        int temp = i;
        while(temp != 0){
            sum += temp%10;
            temp /= 10;
        }
        if(sum == 17){
            cout << i << " ";
        }
        sum = 0;
    }
    
    return 0;
}
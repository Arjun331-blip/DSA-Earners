#include <iostream>
using namespace std;

int main() {
    for(int i=1;i<=1000;i++){
        int sum = 0;
        while(i != 0){
            sum += i%10;
            i /= 10;
        }
        if(sum == 17){
            cout << i << " ";
        }
        sum = 0;
    }
    return 0;
}
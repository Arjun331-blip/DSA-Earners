#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a numbe of n : ";
    cin >> n;
    if(n > 500){
        cout << "Invalid Input";
        return 0;
    }

    int nextNumber = n + 1;

    while(true) {
        if(nextNumber <= 1){
            continue;
        }
        bool isPrime = true;
        
        for(int i=2;i<=nextNumber/2;i++){
            if(nextNumber%i == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime){
          cout << "Strictly next prime number hai: " << nextNumber;
          break;  
        }
        nextNumber++;
    }
    return 0;
}
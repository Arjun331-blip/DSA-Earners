#include <iostream>
using namespace std;

long long factorial(int n){
    long long fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}

long long ncr(int n, int r){
    long long nfact = factorial(n);
    long long rfact = factorial(r);
    long long n_rfact = factorial(n-r);
    long long ncr1 = nfact/(n_rfact*rfact);
    return ncr1;
}



int main() {
    int n;
    cout << "enter the number of n : ";
    cin >> n;
    for(int i=0;i<n;i++){
        for(int space=0;space<n-i;space++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << ncr(i,j) << "  ";
        }
        cout << endl;
    }
    return 0;
}
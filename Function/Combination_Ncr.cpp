#include <iostream>
using namespace std;

long long ncr(int n){
    long long fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    cout << "enter the number of n : ";
    cin >> n;
    cout << "enter the number of r : ";
    cin >> r;
    long long nfact = ncr(n);
    long long rfact = ncr(r);
    long long n_rfact = ncr(n-r);
    long long ncr = nfact/(n_rfact*rfact);
    cout << ncr;
    
    return 0;
}
// using for loop


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "ente the number : ";
//     cin >> n;
//     int count = 0;

//     for(int i=1;i<=n;i++){
//         count = count + i;
//     }
//     cout << "sum of natural number is. "<< count;
//     return 0;
// }


// using formula

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "ente the number : ";
//     cin >> n;
//     int sum = (n*(n+1))/2;
//     cout << sum;
//     return 0;
// }



//  using Recursion
#include <iostream>
using namespace std;

int sum(int n){
    if(n == 1) return 1;
    return n + sum);
}

int main() {
    int n;
    cout << "ente the number : ";
    cin >> n;
    int count = sum(n);
    cout << count;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // int n;
    // cout << "enter a number : ";
    // cin >> n;

    // Question 1
    // int i = 1;
    // while (i < n ) {
    //     int j = n ;
    //     while ( j > 0) {
    //     j = j / 2;
    //     cout << j << " ";
    //     }
    // i = i * 2;
    // }

    // Question 2
    // vector <int > v = {1 , 2, 4 , 4 , 4 , 6 , 7};
    //  auto l = lower_bound (v . begin () , v . end () , 4) ;
    //  auto u = upper_bound (v . begin () , v . end () , 4) ;
    //  cout << *l << *u << u - l ;

    // Question 3
    // int arr [] = {2 , 4, 6, 8, 10};
    //  int l = 0, r = 4;
    //  while (l < r ) {
    //      int mid = l + r / 2;
    //      if ( arr [ mid ] < 5) l = mid ;
    //      else r = mid - 1;
    //  }
    //  cout << l ;

    // Question 4
    // int arr [] = {10 , 20 , 30 , 40 , 50};
    // cout << * lower_bound ( arr , arr + 5, 35) ;

    // Question 5
    vector <int > v = {50 , 40 , 30 , 20 , 10};
     auto it = lower_bound ( v. begin () , v. end () , 30) ;
     if( it != v. end () ) cout << * it ;
     else cout << " -1";
    return 0;
}
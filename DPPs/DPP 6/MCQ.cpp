#include <iostream>
#include <vector>
using namespace std;

void updateVector(vector<int> v){
    v[0] = 100;
}

int main() {
    // int arr[4] = {12, 20};
    // cout << arr[1] << " " << arr[3];

    // vector<int> vec;
    // vec.push_back(5);
    // vec.push_back(5);
    // vec.push_back(5);
    // vec.push_back(5);
    // vec.push_back(5);
    // vec.pop_back();
    // vec.pop_back();
    // cout << vec.size() << " " << vec.capacity();

    // vector<int> vec = {1,4,56,7};
    // updateVector(vec);
    // cout << vec[0];

    // vector<int> vec(3,5);
    // vec.push_back(10);
    // cout << vec[2] << " " << vec[3];

    // int arr [] = {10 , 20 , 30};
    // cout << *( arr + 1) << " " << arr [2];

    // int arr [5] = {1 , 2};
    // cout << sizeof ( arr ) / sizeof ( arr [0]) << " " << arr [4];

    // vector <int > v = {1 , 2, 3};
    //  for( int &x : v) {  
    //     x = x * 2;
    //  }
    //  cout << v [0] << " " << v [1] << " " << v [2];

    // int arr [] = {2 , 4, 6, 8};
    //  int* ptr = arr ;
    //  cout << *ptr ++ << " ";
    //  cout << *++ ptr << " ";
    //  cout << ++* ptr << endl ;

    vector <int > v = {10 , 20 , 30};
     int& ref = v [0];
     // Force vector to grow and reallocate
     for( int i = 0; i < 100; i ++) {
     v. push_back (i) ;
     }
    ref = 999;

    cout << ref << endl ;
    return 0;
}
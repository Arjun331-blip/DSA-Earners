#include <iostream>
using namespace std;

int main() {
    // Question 1
    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=2;j++){
    //         cout << i << j << " ";
    //     }
    // }


    // Question 2
    // for(int i=1;i<=4;i++){
    //     for(int j=4;j>=i;j--){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    // Question 3
    // int n = 3;
    // for(int i=1;i<=n;i++){
    //     char ch = 'A';
    //     for(int j=1;j<=i;j++){
    //         cout << ch++ << " ";
    //     }
    //     cout << endl;
    // }

    // Question 4
    // for( int i = 1; i <= 3; i ++) {
    //     for ( int j = 1; j <= i ; j ++) {
    //         if (( i + j ) % 2 == 0) cout << "1";
    //         else cout << "0";
    //     }
    //     cout << endl ;
    // }


    // Question 5
    // int count = 1;  
    // for( int i = 1; i <= 3; i ++) {   
    //     for ( int j = 1; j <= 3; j ++) {   
    //     if( i == j ) { 
    //     cout << "X"; 
    //     } else {
    //         cout << count ++;
    //         }
    //     }
    //     cout << endl;   
    // }

    // Question 6
    // for( int i = 1; i <= 3; i ++) { 
    //     int val = i ;    
    //     for ( int j = 1; j <= 3; j ++) {    
    //         cout << val << " "; 
    //         val += 2;    
    //     }
    //     cout << endl ;
    // }

    //question 7 
//     for( int i = 0; i < 4; i ++) {  
//         for ( int j = 0; j < 4; j ++) {   
//         if( i == 0 || i == 3 || j == 0 || j == 3)  
//         cout << "#";  
//         else  
//         cout << " ";
//     }
//     cout << endl ;
// }

    // question 8
    // int n = 3;  
    // for( int i = 1; i <= n; i ++) {   
    //     for ( int space = 1; space <= n - i; space ++) cout << " ";    
    //     for ( int j = 1; j <= i ; j ++) cout << "*";    
    //     cout << endl ;
    // }


    // question 9
    // int n = 4;  
    // for( int i = 1; i <= n; i ++) {   
    //     int x = 1; 
    //     for ( int j = 1; j <= n ; j ++) {    
    //         if( j <= n - i ) {  
    //         cout << " ";
    //     } else {
    //         cout << x ;
    //          x = !x ;
    //         }
    //     }
    //     cout << endl ;
    // }

    // question 10
    int k = 1;  
    for( int i = 1; i <= 3; i ++) {   
        for ( int j = 1; j <= i ; i ++) {  
        cout << k ++ << " ";  
        if( k > 4) break ;    
    }
    
    if(k > 4) break ;
    
    cout << endl ;
    
}
    return 0;
}

// #include <iostream>
// using namespace std ;
// int main () {
//     int a = 5, b = 10;
//     if( a == b ) {
//     cout << " Equal matches " << a << endl ;
//     } else {
//     cout << "Not equal " << a << endl ;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std ;
// int main () {
//     int a = 5, b = 10;
//     if( a = b ) {
//     cout << " Equal matches " << a << endl ;
//     } else {
//     cout << "Not equal " << a << endl ;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std ;
// int main () {
// int num = -7;
// if ( num >= 0) {
// cout << " Inside Positive block " << endl ;
// } else {
// cout << " Inside Negative block " << endl ;
// }
// return 0;
// }



// #include<iostream>
// using namespace std ;
// int main () {
//     int x = 0, y = 5;
//     if( x != 0 && (y = y + 10) > 10) {
//     cout << " Inside if branch " << endl ;
//     }
//     cout << "x = " << x << ", y = " << y << endl ;
// return 0;

// }


// #include<iostream>
// using namespace std ;
// int main () {
//     int p = 1, q = 20;
//     if( p == 1 || (q = q + 5) > 25) {
//     cout << " First branch hit " << endl ;
// }
// cout << "p = " << p << ", q = " << q << endl ;
// return 0;

// }


// #include<iostream>
// using namespace std ;
// int main () {
//     int marks = 45;
//     bool pass = ( marks >= 40) ? true : false ;
//     int bonus = pass ? 5 : 0;
//     cout << " Pass status : " << pass << ", Bonus : " << bonus << endl ;
//     return 0;
// }


// #include<iostream>
// using namespace std ;
// int main () {
//     int x = 12 , y = 8;
//     int max_val = ( x > y) ? x : y ;
//     cout << " Maximum value is " << max_val << endl ;
//     return 0;
// }


// #include<iostream>
// using namespace std ;
// int main () {
//     int code = 2;
//     switch ( code ) {
//     case 1: cout << " Alpha " << endl ;
//     case 2: cout << " Beta " << endl ;
//     case 3: cout << " Gamma " << endl ;
//     break ;

//     default : cout << " Omega " << endl ;

// }

// return 0;

// }




#include<iostream>
using namespace std ;
int main () {
    int val = 66;
    switch ( val ) {
    case 'B': cout << " Character match A" << endl ; break ;
    case 66 : cout << " Integer match 65" << endl ; break ;
    default : cout << "No match found " << endl ;
}

return 0;

}



// #include<iostream>
// using namespace std ;
// int main () {
//     int a = 0, b = 0;
//     if (a ++ && ++ b) {
//     cout << " Condition standard check true " << endl ;
// }
// cout << "a = " << a << ", b = " << b << endl ;
// return 0;

// }
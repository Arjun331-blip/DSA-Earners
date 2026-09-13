// Question number 1
// #include <iostream>
// using namespace std;

// int main() {
//     for(int i=1;i<=3;i++){
//         cout << i << " ";
//     }
//     return 0;
// }


// Question number 2
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 3;
//     while(x--){
//         cout << x << " ";
//     }
//     return 0;
// }


// Question number 3
// #include <iostream>
// using namespace std;

// int main() {
//     int count = 0;
//     do{
//         cout << "Loop";
//         count++;
//     }while(count < 0);
//     return 0;
// }


// Question number 4
// #include <iostream>
// using namespace std;

// int main() {
//     for( int i = 0; i < 5; i ++) {
//         if(i == 2) break ;
//         cout << i << " ";
//     }
//     return 0;
// }


// Question number 5
// #include <iostream>
// using namespace std;

// int main() {
//     int sum = 0;
//     for( int i = 1; i <= 4; i ++) {
//     if(i % 2 == 0) continue ;
//     sum += i ;
//     }
//     cout << sum ;
//     return 0;
// }


// Question number 6
// #include <iostream>
// using namespace std;

// int main() {
//     int i = 0;
//     while (i < 3) {
//         cout << i << " ";
//         i += 2;
//     }
//     return 0;
// }


// Question number 7
// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;
//     for( ; i <= 5; ) {
//         cout << i << " ";
//         i = i + 2;
//     }
//     return 0;
// }


// Question number 8
// #include <iostream>
// using namespace std;

// int main() {
//     for( int i = 1, j = 10; i < j; i ++ , j -= 3) {
//         cout << i << " ";
//     }
//     return 0;
// }


// Question number 9
// #include <iostream>
// using namespace std;

// int main() {
//     int i = 0;
//     while (i = 3) {
//         cout << "PW ";
//         break ;
//     }
//     return 0;
// }


// Question number 10
// #include <iostream>
// using namespace std;

// int main() {
//     for( int i = 1; i <= 2; i ++) {
//         for ( int j = 1; j <= 3; j ++) {
//             if( j == 2) break ;
//             cout << i << "  " << j <<endl;
//         }
//     }    return 0;
// }



// Question number 11
// #include <iostream>
// using namespace std;

// int main() {
//     for( int i = 0; i < 5, false ; i ++) {
//         cout << " Hello ";
//     }
//     cout << " Done ";
//     return 0;
// }


// Question number 12
#include <iostream>
using namespace std;

int main() {
   int i = 0;
    for (;;) {
        if(i == 5) {
            break;
        }
    cout << i << " ";

    i += 2;

    } 
    return 0;
}
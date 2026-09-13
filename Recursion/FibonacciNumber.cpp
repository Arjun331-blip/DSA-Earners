#include <iostream>
using namespace std;

// find nth fibonacci number 
int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    int curr = fibonacci(n-1);
    int next = fibonacci(n-2);
    return curr + next;
}

// find  1 to n fibonacci number


int main() {
    int n = 10;
    fibonacci(n);
    return 0;
}
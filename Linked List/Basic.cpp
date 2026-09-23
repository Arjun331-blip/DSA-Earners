#include <iostream>
using namespace std;

// hera i am creating a node without and address
class Node{
    public:
    int data;
    Node *next;
};

int main() {
    Node a;
    a.data = 7;
    Node b;
    b.data = 0;
    Node c;
    c.data = 8;
    Node d;
    d.data = 2;
    Node e;
    e.data = 1;
    cout << a.data   << endl;
    cout << a.next   << endl;
    cout << b.data   << endl;
    cout << b.next   << endl;
    cout << c.data   << endl;
    cout << c.next   << endl;
    cout << d.data   << endl;
    cout << d.next   << endl;
    cout << e.data   << endl;
    cout << e.next   << endl;
    return 0;
}
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

int main() {
    Node a(7);
    Node b(0);
    Node c(8);
    Node d(2);
    Node e(1);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;

    // i have tow way access another node value with another node
    cout << (*(a.next)).data << endl;  // one way
    cout << a.next->next->next->next->data << endl;  // two way

    // iterate entire linkedlist element
    return 0;
}
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
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
    e.next = &e;
    e.next = NULL;

    // cout << a.data  << endl;
    // cout << (*(a.next)).data  << endl;
    // cout << a.next->data  << endl;

    // print all element in the linkedlist
    cout << "Value : " << a.data << " Address : " << a.next << endl;
    cout << "Value : " << a.next->data << " Address : " << b.next << endl;
    cout << "Value : " << a.next->next->data << " Address : " << c.next << endl;
    cout << "Value : " << a.next->next->next->data << " Address : " << d.next << endl;
    cout << "Value : " << a.next->next->next->next->data << " Address : " << e.next << endl;
    return 0;
}
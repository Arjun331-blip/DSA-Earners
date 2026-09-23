#include <iostream>
using namespace std;

// here i am creating node and to point one node to another

class Node{
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

    
    cout << "Value : " << a.data << " Address : " << a.next << endl;
    cout << "Value : " << b.data << " Address : " << b.next << endl;
    cout << "Value : " << c.data << " Address : " << c.next << endl;
    cout << "Value : " << d.data << " Address : " << d.next << endl;
    cout << "Value : " << e.data << " Address : " << e.next << endl;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;

    cout << endl;
    cout << "Value : " << a.data << " Address : " << a.next << endl;
    cout << "Value : " << b.data << " Address : " << b.next << endl;
    cout << "Value : " << c.data << " Address : " << c.next << endl;
    cout << "Value : " << d.data << " Address : " << d.next << endl;
    cout << "Value : " << e.data << " Address : " << e.next << endl;
    return 0;
}
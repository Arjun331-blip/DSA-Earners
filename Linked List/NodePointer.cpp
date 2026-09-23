#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
    Node(){}

    void print(Node *head){
        Node *temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void recursion(Node *head){
        Node *temp = head;
        if(temp == NULL) return;
        // cout << temp->data << " ";  // print same order
        recursion(temp->next);
        cout << temp->data << " ";  // print reverse order
    }
};

int main() {
    // Node* a; a = new Node(7);  // two line
    Node *a = new Node(7);
    Node *b = new Node(0);
    Node *c = new Node(8);
    Node *d = new Node(2);
    Node *e = new Node(1);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    a->print(a);
    a->recursion(a);
    
    return 0;
}
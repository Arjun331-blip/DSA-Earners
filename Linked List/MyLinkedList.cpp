#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class MyLinkedList{
    Node* head;
    Node* tail;
    int length;
    public:
    MyLinkedList(){
        head = tail = NULL;
        length = 0;
    }
    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data <<" ";
            temp = temp->next; 
        }
        cout << endl;
    }

    void insertAtTail(int value){
        Node *n = new Node(value);
        if(length == 0){
            head = tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
        length++;
    }

    void insertAtHead(int value){
        Node *n = new Node(value);
        if(length == 0) head = tail = n;
        else {
            n->next = head;
            head = n;
        }
        length++;
    }

    void removeAtHead(){
        if(length == 0) {
            cout << "List is Empty.";
            return;
        } else{
            head = head->next;
            length--;
        }
    }

    int size(){
        return length;
    }
};


int main() {
    MyLinkedList list;
    list.insertAtTail(7);
    list.insertAtTail(0);
    list.insertAtTail(8);
    cout << "linked List Element : ";
    list.print();
    cout << "Size of Linked List : " << list.size() << endl;
    list.insertAtHead(2);
    list.insertAtHead(1);
    cout << "linked List Element : ";
    list.print();
    cout << "Size of Linked List : " << list.size() << endl;
    list.removeAtHead();
    cout << "linked List Element : ";
    list.print();
    cout << "Size of Linked List : " << list.size() << endl;
    return 0;
}
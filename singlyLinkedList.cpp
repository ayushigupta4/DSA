#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);

    tail -> next = temp;
    tail = tail -> next;
}

void InsertInMiddle(Node* &head, int position, int d) {

    if(position == 1) {
        InsertAtHead(head,d);
        return;
    } 
    Node* temp = head;
    int i = 1;
    while(i<position-1) {
        temp = temp->next;
        i++;
    }
    Node* node1 = new Node(d);
    node1->next = temp->next;
    temp->next = node1;


}

void print(Node* &head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {

    Node* head  = new Node(10);
    Node* tail = head;
    cout << head -> data << endl;
    cout << head -> next << endl;

    /*
    InsertAtHead(head,15);
    InsertAtHead(head,20);
    InsertAtHead(head,25);
    InsertAtHead(head,30);
    */
    InsertAtTail(tail,15);
    InsertAtTail(tail,20);
    InsertAtTail(tail,25);
    InsertAtTail(tail,30);

    InsertInMiddle(head,3,100);
    InsertInMiddle(head,1,150);
   
    print(head);
    cout << "Head -> " << head -> data << endl;
    cout << "Tail -> " << tail -> data << endl;

    return 0;
}
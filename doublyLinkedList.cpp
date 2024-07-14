#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while(temp != NULL) {
        len++;
        temp = temp -> next;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
    Node* temp = new Node(data);
    if( head != NULL) {
        temp->next = head;
        head->prev = temp;
    }
    else {
        tail = temp;
    }
    
    head = temp;
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    if(tail==NULL) {
        insertAtHead(head, tail, data);
        return;
    }
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {

    
    if(position == 1 || head==NULL) {
        insertAtHead(head, tail, data);
        return;
    }
    Node* temp = head;
    int i=1;
    while(i<position-1) {
        temp=temp->next;
        i++;
    }
    if(temp->next == NULL) {
        insertAtTail(head, tail,data);
        return;
    }

    Node* node1 = new Node(data);
    temp->next->prev = node1;
    node1->next = temp->next;
    temp->next = node1;
    node1->prev = temp;

}

int main() {
    Node* head = NULL;
    Node* tail = head;

    print(head);
    cout << "Length: " << getLength(head) << endl;

    insertAtHead(head, tail, 12);
    print(head);
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl; 

    insertAtTail(head, tail,14);
    print(head);

    insertAtPosition(head, tail, 16, 2);
    insertAtPosition(head, tail, 18, 4);
    print(head);

    return 0;
}
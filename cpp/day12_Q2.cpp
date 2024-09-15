/*

Ques 2: Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with the given data at the end of a singly linked list. nput: A linked list with elements 10 -> 20 -> 30, and a new data 40
Output: The linked list becomes 10 -> 20 -> 30 -> 40

*/
#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;

    }
};

void insertAtEnd(Node*& head, int val){
    Node* newNode = new Node(val);

    if(head==NULL){
        head=newNode;
        return;
    }

    Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }

    temp->next=newNode;
}

void displayList(Node* head){
    Node* temp=head;
    cout<<"The linked list becomes: ";
    while(temp != NULL){
        cout<<temp->data;
        if(temp->next != NULL) cout<<"->";
        temp=temp->next;
    }
}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    
    insertAtEnd(head,40);

    displayList(head);
}
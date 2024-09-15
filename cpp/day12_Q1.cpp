/*
Ques 1 : Write a function void printLinkedList(Node* head) that traverses a singly linked list and prints each element's value. Input: A linked list with elements 10 -> 20 -> 30 -> 40
Output: 10 20 30 40

*/
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next; 

    Node(int val) : value(val), next(nullptr) {}
    
};


void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout<<endl;
}


int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    printLinkedList(head);

    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}

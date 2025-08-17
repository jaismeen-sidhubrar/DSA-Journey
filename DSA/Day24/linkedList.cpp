// Traversing problems:-

// total number of nodes:
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val): data(val),next(nullptr) {}
};

int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertEnd(Node*& head, int val) {
    Node* newNode = new Node(val); 
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) temp = temp->next;
    temp->next = newNode;
}

int main() {
    Node* head = nullptr;
    insertEnd(head,4);
    insertEnd(head,8);
    insertEnd(head,12);
    insertEnd(head,16);

    cout << "Count:- " << countNodes(head) << endl;

    return 0;
}

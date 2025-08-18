#include <iostream>
#include <climits> 
using namespace std;

struct Node {
    int data;
    Node* next;
};

void findMaxMin(Node* head) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    int maximum = INT_MIN; 
    int minimum = INT_MAX; 

    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data > maximum)
            maximum = temp->data;
        if (temp->data < minimum)
            minimum = temp->data;

        temp = temp->next;
    }

    cout << "Maximum Element: " << maximum << endl;
    cout << "Minimum Element: " << minimum << endl;
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    head->data = 15;
    second->data = 7;
    third->data = 42;
    fourth->data = 3;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;

    findMaxMin(head);

    return 0;
}

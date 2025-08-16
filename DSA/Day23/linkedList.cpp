// #include <iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;
// };

// int main(){
//     //first Node:-
//     Node* head=new Node;
//     head->data=10;
//     head->next=new Node;

//     // 2nd Node:-
//     head->next->data=20;
//     head->next->next=new Node;

//     // 3rd Node:-
//     head->next->next->data=30;
//     head->next->next->next=NULL;

//     Node* temp=head;
//     while(temp!=NULL){
//         cout << temp->data << " ";
//         temp=temp->next;
//     }

//     return 0;
// }























// Traverse in Linked List:-
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int value): data(value),next(nullptr){};
};

// Forward:-
void traverseList(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout << temp->data << " ";
        temp=temp->next;
    }
}

// Backward:-
void traverseListBack(Node* head){
    if(head==nullptr) return;
    traverseListBack(head->next);
    cout << head->data << " ";
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);

    traverseList(head);
    cout << endl;
    traverseListBack(head);

    while(head!=nullptr){
        Node* temp=head;
        head=head->next;
        delete temp;
    }

    return 0;
}


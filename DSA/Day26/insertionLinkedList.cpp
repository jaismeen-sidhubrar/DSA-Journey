// insertion:-

#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int val):data(val),next(nullptr){}
};

node* input(int n){
    node* head=nullptr;
    node* tail=nullptr;
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        node* newnode=new node{val};
        if(!head){
            head=newnode;
            tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    return head;
}

node* insert_at_begin(node* head,int value){
    node* newNode = new node(value);
    newNode->next=head;
    return newNode;
}

node* insert_at_end(node* head,int val){
    node* newnode = new node(val);
    if(head==nullptr) return newnode;
    node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}

node* insertAtSpecificIndexSortedList(node* head,int val){
    node* newnode=new node(val);
    if(head==nullptr || head->data >=val){
        newnode->next=head;
        return newnode;
    }
    node* temp=head;
    while(temp->next!=nullptr && temp->next->data<val){
        temp=temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

void print(node* head){
    while(head!=nullptr){
        cout << head->data << "-";
        head=head->next;
    }
}

int main(){
    int n;
    cin >> n;
    node* head=input(n);
    print(head);
    cout << endl;
    int k;
    cin >> k;
    // head=insert_at_begin(head,k);
    // head=insert_at_end(head,k);
    head=insertAtSpecificIndexSortedList(head,k);
    print(head);
    return 0;
}


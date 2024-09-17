//Creating a LL and inserting nodes at tail and head
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){};
    Node(int val){
        data=val;
        next=NULL;
    };
};
void insertAtTail(Node* &head,int val){
    Node* n= new Node(val);
    if(head==NULL){
    head=n;
    return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
    }
}
int main()
{
    Node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
 return 0;
}
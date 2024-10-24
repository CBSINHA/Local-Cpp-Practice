#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node* prev;
Node* next;
Node(int data){
    this->data=data;
    prev=NULL;
    next=NULL;
}
};
void insertathead(Node* &head,int data){
    Node* newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        return;
    }
    else{
        Node* temp=head;
        newNode->next=temp;
        temp->prev=newNode;
        head=newNode;
    }
}
void insertatposition(Node* &head,int value,int position){
    Node* newNode=new Node(value);
    Node* temp=head;
    int count=1;
    while(count!=position){
        temp=temp->next;
        count++;
    }
    newNode->next=temp;
    newNode->prev=temp->prev;
    temp->prev->next=newNode;
    temp->prev=newNode;
}
void deleteNode(Node* &head,int value){
    Node* temp=head;
    while(temp->data!=value){
        temp=temp->next;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    free(temp);
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
    }
    cout<<"NULL\nEnd of doubly linked list"<<endl;
}
void displayReverse(Node* head){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->prev;
    }
    cout<<"NULL";
}
int main(){
    Node* head=NULL;
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,5);
    insertathead(head,69);
    insertatposition(head,9,3);
    deleteNode(head,69);
    display(head);
    displayReverse(head);
    return 0;
}
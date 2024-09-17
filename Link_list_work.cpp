#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){};
    Node(int val){
        this->data=val;
        next=NULL;
    };
};
void InsertatTail(Node* &head,int val){
    cout<<"Enter the value to append to the Linked List: "<<endl;
    cin>>val;
    Node* n=new Node(val);
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
void Delete(Node* &head,int val){
    cout<<"Enter the value you want to delete from the Linked List: "<<endl;
    cin>>val;
    if(head==NULL){
        cout<<"The Linked List is empty and hence no value can be deleted."<<endl;
        return;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp->data!=val){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    delete(temp);
}
void Display(Node* head){
    cout<<"The final Linked List: ";
    Node* temp=head;
    while(temp!=NULL){
        cout<< temp->data<<" ";
        temp=temp->next;
    }
    cout<<"That's the whole LL.";
}
int main()
{
    Node* head=NULL;
    Display(head);
 return 0;
}
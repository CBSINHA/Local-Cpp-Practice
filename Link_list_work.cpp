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
    if(head==NULL){
        cout<<"The Linked List is empty and hence no value can be deleted."<<endl;
        return;
    }
    Node* temp=head;
    Node* prev=NULL;
    if(temp->data==val){
        head=temp->next;
        delete temp;
    }
    else{
    while(temp->data!=val){
        if(temp->next==NULL){
            cout<<"Value not found."<<endl;
            return;
        }
        prev=temp;
        temp=temp->next;
    }
    
    prev->next=temp->next;
    delete(temp);
    }
}
void Display(Node* head){
    cout<<"The final Linked List: ";
    Node* temp=head;
    while(temp!=NULL){
        cout<< temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<"That's the whole LL."<<endl;
}
int main()
{
    int val,val1,code;
    Node* head=NULL;
    cout<<"Enter 1 to add to add element at tail\nEnter 2 to Delete element anywhere in the LL\n3 to display the LL.\n69 terminates the program"<<endl;
    cin>>code;
    while(code!=69){
        switch (code){
            case 1:
            cout<<"Enter the element: ";
            cin>>val;
            InsertatTail(head,val);
            break;
            case 2:
            cout<<"Enter element for deletion: ";
            cin>>val1;
            Delete(head,val1);
            break;
            case 3:
            Display(head);
            break;
        }
        cout<<"Enter your choice again"<<endl;
        cin>>code;
    }
 return 0;
}
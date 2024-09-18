//Using concepts of Doubly linked list and vectors and Dynamic(Heap) memory allocation
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    vector<int> data;
    Node* next;
    Node* prev;
    Node(){};
    Node(vector<int>val){
        this->data=val;
        next=NULL;
        prev=NULL;
    }
};
void Insert(Node* &head,vector<int>val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    n->prev=temp;
    temp->next=n;
}
void Display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        for(int i=0;i<temp->data.size();i++){
            cout<<temp->data[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    Node* head=NULL;
    cout<<"Enter 1 to add array to LL\n2 to display\n0 to end"<<endl;
    int n;
    cin>>n;
    vector<int>val;
    while(n!=0){
    switch(n){
        case 1:
        cout<<"Enter elements:"<<endl;
        int i;
        while(i!=-1){
        cin>>i;
        val.push_back(i);
        }
        Insert(head,val);
        break;
        case 2:
        Display(head);
        break;
    }
    }
 return 0;
}
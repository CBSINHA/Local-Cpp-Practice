// You are using GCC
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        this->data=val;
        left=right=NULL;
    }
};
void insert(Node*& root,int val){
    if(root==NULL){
        root=new Node(val);
        return;
    }
    if(val<root->data)
    insert(root->left,val);
    else
    insert(root->right,val);
}
void traversal(Node* root){
    if(root==NULL)
    return;
    traversal(root->left);
    traversal(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root=NULL;
    int n;
    while(true){
        cin>>n;
        if(n==-1)
        break;
        insert(root,n);
    }
    traversal(root);
    return 0;
}
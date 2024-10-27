#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    Node(int value){
        this->data=value;
        left=right=NULL;
    }
};
void insertNode(Node* &root,int value){
    if(root==NULL){
        root=new Node(value);
        return;
    }
    if(value<root->data)
    insertNode(root->left,value);
    else
    insertNode(root->right,value);
}
void display(Node* root){
    if(root==NULL)
    return;
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
void BFS(Node *root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
}
int main(){
    Node* root=NULL;
    insertNode(root,1);
    insertNode(root,3);
    insertNode(root,2);
    insertNode(root,5);
    display(root);
    cout<<endl;
    BFS(root);
}
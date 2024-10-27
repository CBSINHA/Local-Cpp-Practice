// You are using GCC
#include<iostream>
#include<queue>
using namespace std;
void enqueue(queue<int>*q,int val){
    q->push(val);
    cout<<"Customer ID "<<val<<" is enqueued"<<endl;
}
void dequeue(queue<int>*q){
    cout<<"Dequeued customer ID: "<<q->front();
    q->pop();
}
void display(queue<int>q){
    cout<<"Customer IDs in the queue are: ";
    while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();}
}
int main(){
    queue<int>q;
    int choice;
    while (true){
    cin>>choice;
    if(choice==4){
        break;
    }
    switch (choice){
        case 1:
        //code
        int data;
        cin>>data;
        enqueue(&q,data);
        break;
        case 2:
        //code
        dequeue(&q);
        break;
        case 3:
        //code
        display(q);
        break;
        case 4:
        //code
        break;
        default:
        cout<<"Invalid option";
    }
    }
}
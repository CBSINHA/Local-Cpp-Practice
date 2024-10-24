#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void displayStack(stack<int>st){
    while(!st.empty()){
            cout<<st.top()<<endl;
            st.pop();
        }
}
void displayQueue(stack<int>st){
    queue<int>q;
        while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
        while(!q.empty()){
        cout<<q.front()<<"\t";
        q.pop();
    }

}
void displayDequeue(stack<int>st){
    deque<int>dq;
        while(!st.empty()){
        dq.push_back(st.top());
        st.pop();
    }
    while(!dq.empty()){
        cout<<dq.back()<<"\t";
        dq.pop_back();
    }
}
// queue<int> toQueue(stack<int>st){
//         queue<int>q;

//     return q;
// }
// deque<int> toDequeue(stack<int>st){
//         deque<int>dq;

//     return dq;
// }
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<"The stack:\n";
    displayStack(st);
    cout<<"End of stack\n";
    cout<<"Converting the stack into a queue......."<<endl;
    cout<<"The queue is:"<<endl;
    displayQueue(st);
    cout<<"\nConverting the stack into a deque......"<<endl;
    cout<<"The deque is:\n";
    displayDequeue(st);
}
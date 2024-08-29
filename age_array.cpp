#include<iostream>
using namespace std;
void age(){
    int arr[5];
    for(int i:arr){
        cout<<"Enter age: ";
        cin>>i;
    }
    for(int i:arr){
        cout<<i<<" ";
    }
}
int main(){
    age();
    return 0;
}
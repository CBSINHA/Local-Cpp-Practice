#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;
    int **ptr1=&ptr;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of ptr: "<<ptr<<endl;
    cout<<"Value of ptr1: "<<ptr1;
    return 0;
}
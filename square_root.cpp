#include<iostream>
#include<math.h>
using namespace std;
double root(int num){
    return sqrt(num);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<root(n);
    return 0;
}
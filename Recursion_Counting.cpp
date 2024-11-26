#include<iostream>
using namespace std;
void Count(int n){
    if(n==0) return;
    cout<<n<<" ";
    return Count(n-1);
}
int main(){
    int n;
    cout<<"Enter NUmber:";
    cin>>n;
    Count(n);
}
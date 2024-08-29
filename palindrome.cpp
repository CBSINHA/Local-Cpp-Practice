#include<iostream>
using namespace std;
char toLower(char ch){
    if(ch>='a'&&ch<='z') return ch;
    else
    return ch-'A'+'a';
}
bool palindrome(char arr[],int size){
    int s=0,e=size-1;
    while(s<e){
        if(arr[s]!=arr[e])
        return false;
        else{
            s++;
            e--;
        }
    }
    return true;
}
int main(){
    char arr[100]="noon";
    if(palindrome(arr,4))
    cout<<"palindrome";
    else
    cout<<"Not palindrome";
    return 0;
}
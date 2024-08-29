#include<iostream>
#include<climits>
using namespace std;
int min(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}
int main(){
    int arr[5]={5,7,2,3,9};
    cout<<min(arr,5);
    return 0;
}
#include<iostream>
using namespace std;
int occurence(int arr[], int size, int key){
    int s=0;
    int e=size-1;
    int mid=(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
        return mid;
        e=mid-1;
    }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else
        e=mid-1;
        mid=(s+e)/2;
    }
    return ans;
    }
int main(){
    int arr[7]={1,2,3,3,3,3,5};
    occurence(arr,7,3);
    return 0;
}
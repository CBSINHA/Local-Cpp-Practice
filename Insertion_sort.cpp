#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
            while(j>0&&arr[j-1]>arr[j] ){
                swap(arr[j-1],arr[j]);
                j--;
            }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={1,3,7,2,9};
    InsertionSort(arr,5);
 return 0;
}
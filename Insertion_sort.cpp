#include<iostream>//wrong
using namespace std;
void InsertionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
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
    int arr[]={300,15,9,3,7,1,2,700};
    InsertionSort(arr,5);
 return 0;
}
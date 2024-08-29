#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    for(int i=4;i>=1;i--){
        bool swapped=false;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped=false)
        break;
    }
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
 return 0;
}
#include<iostream>
using namespace std;
void Selection(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int tmp = arr[j];
                arr[j]=arr[i];
                arr[i]=tmp;
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[5]={1,5,3,4,2};
    Selection(arr,5);
}
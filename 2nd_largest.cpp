//review for 9 7 8 6
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    int largest=INT_MIN,largest_2;
    vector<int> arr={1,2,3,4,5};
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest_2=largest;
            largest=arr[i];
        }
    }
    cout<<largest_2<<endl;
 return 0;
}
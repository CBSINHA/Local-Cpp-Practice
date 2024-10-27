#include<iostream>
#include<vector>
using namespace std;
void TOH(int disk,char source,char intermediate,char destination){
    if(disk==0){
    return;
    }
    TOH(disk-1,source,destination,intermediate);
    cout<<"Move disk "<<disk<<" from "<<source<<" to "<<destination<<endl;
    TOH(disk-1,intermediate,source,destination);
}
int main()
{
    int n;
    cout<<"Enter the number of disks in tower of hanoi: ";
    cin>>n;
    char a,b,c;
    cout<<"Enter the name of the rods: ";
    cin>>a>>b>>c;
    TOH(n,a,b,c);
 return 0;
}
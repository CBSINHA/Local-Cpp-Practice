#include<iostream>
using namespace std;
int main(){
string light;
cout<<"Enter color of the traffic light: ";
cin>>light;
if(light=="Red"||light=="red")
cout<<"Stop";
else if(light=="Yellow"|| light=="yellow")
cout<<"Slow Down";
else if(light=="green"||light=="Green")
cout<<"Go";
else
cout<<"Invalid Color";
}
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter Marks: ";
    cin>>marks;
    if(marks>100 || marks<0)
    cout<<"Invalid marks entered";
    else{
        if(marks>=90)
        cout<<"Grade A";
        else if(marks>=80 && marks<90)
        cout<<"Grade B";
        else if(marks>=70 && marks<80)
        cout<<"Grade C";
        else if(marks>=60 && marks<70)
        cout<<"Grade D";
        else
        cout<<"Fail";
    }
}
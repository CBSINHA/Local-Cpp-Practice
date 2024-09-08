#include<iostream>
#include<vector>
using namespace std;
inline int add(int a,int b){
    return a+b;
}
int main()
{
    cout<<add(2,3);
 return 0;
}
//Inline functions are used to execute simple function with simple return tyoes 
//whether a function is treates as an inlione or normal it totally depends on the compiler
#include<iostream>
#include<vector>
using namespace std;
template<typename T>
T add(T num1,T num2){
    return(num1+num2);
}
int main()
{
    cout<<add<int>(2,3)<<endl;
    cout<<add<double>(2.4,2.4)<<endl;;
    cout<<add<string>("Hello","Badmos");
 return 0;
}
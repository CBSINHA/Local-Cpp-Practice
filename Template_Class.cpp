#include<iostream>
using namespace std;
template<class T>
class Calculate{
private:
T a;
T b;
public:
Calculate(T val1,T val2){
    this->a=val1;
    this->b=val2;
}
void sum(){
    cout<<a+b<<endl;
}
};
int main()
{
    Calculate<int>c1(2,5);
    Calculate<double>c2(2.4,2.4);
    Calculate<string>c3("Hey"," There");
    c1.sum();
    c2.sum();
    c3.sum();
 return 0;
}
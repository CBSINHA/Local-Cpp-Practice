//Friend Class
#include<iostream>
#include<vector>
using namespace std;
class ClassA{
    private:
    int numA;
    public:
    ClassA(){
        this->numA=10;
    }
    friend class ClassB;
};
class ClassB{
    private:
    int numB;
    public:
    ClassB(){
        this->numB=20;
    }
    int Sum(){
        ClassA c1;
        return c1.numA+numB;
    }
};
int main()
{
    ClassB cb;
    cout<<cb.Sum();
 return 0;
}
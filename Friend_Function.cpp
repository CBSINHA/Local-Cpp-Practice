#include<iostream>
#include<vector>
using namespace std;
class ClassB;//We have to do this forward declaration as in line 15 the compiler doesnt know if ClassB exists or not
class ClassA{
    private:
    int num1;
    public:
    ClassA(){
        this->num1=10;
    }
    ~ClassA(){
        cout<<"Destructor called"<<endl;
    }
    friend int Add(ClassA,ClassB);
};
class ClassB{
    int num2;
    public:
    ClassB(){
        this->num2=29;
    }
    ~ClassB(){
        cout<<"Destructor for ClassB"<<endl;
    }
    friend int Add(ClassA,ClassB);

};
int Add(ClassA n1, ClassB n2){
    return n1.num1+n2.num2;
}
int main()
{
    ClassA ca;
    ClassB cb;
    cout<<Add(ca,cb)<<endl;
 return 0;
}
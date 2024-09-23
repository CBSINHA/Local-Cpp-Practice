#include<iostream>
#include<vector>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    //setters
    void setLength(int l){
        length=l;
    }
    void setBreadth(int b){
        breadth=b;
    }
    //getters
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
};
int main()
{
    Rectangle r1;
    r1.setBreadth(5);
    r1.setLength(10);
    cout<<r1.getBreadth()<<endl;
    cout<<r1.getLength();
 return 0;
}
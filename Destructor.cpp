#include<iostream>
using namespace std;
class Room{
    public:
    int length,breadth,height;
    Room(){
        cout<<"From constructor method"<<endl;
    }
    Room(int l, int b,int h){
        cout<<"From constructor 1"<<endl;
        length=l;
        breadth=b;
        height=h;
    }
    int area(){
        return length*breadth;
    }
    int volume(){
        return length*breadth*height;
    }
    ~Room(){
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    Room room1;
    room1.length=10;
    room1.breadth=5;
    room1.height=3;
    cout<<room1.area()<<endl;
    cout<<room1.volume()<<endl;
    Room room2(5,1,2);
    cout<<room2.area()<<endl;
    cout<<room2.volume()<<endl;
    Room room3;
 return 0;
}
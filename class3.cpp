#include<iostream>
using namespace std;
class Room{
    public:
    int length,breadth,height;
    int area(){
        return length*breadth;
    }
    int volume(){
        return length*breadth*height;
    }
};
int main()
{
    Room room1;
    room1.length=10;
    room1.breadth=5;
    room1.height=3;
    cout<<room1.area()<<endl;
    cout<<room1.volume();
 return 0;
}
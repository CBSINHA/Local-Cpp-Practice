#include<iostream>
#include<vector>
using namespace std;
struct Rectangle {
    int breadth;
    int length;
    Rectangle(int l, int b){
        this->length=l;
        this->breadth=b;
    }
    void area(){
        cout<<length*breadth;
    }
};
int main()
{
    struct Rectangle rect=Rectangle(4,5);
    rect.area();
 return 0;
}
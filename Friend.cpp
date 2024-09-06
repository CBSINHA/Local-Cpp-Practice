//friend function example
#include<iostream>
#include<vector>
using namespace std;
class Distance{
    private:
    int length;
    public:
    Distance(){
        this -> length=10;
    }
    friend int increaseDistance(Distance);
};
int increaseDistance(Distance d){
    d.length+=30;
    return d.length;
}
int main()
{
    Distance d1;
    cout<< increaseDistance(d1);
 return 0;
}
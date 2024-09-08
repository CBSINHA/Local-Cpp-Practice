#include<iostream>
#include<vector>
using namespace std;
enum GameState{
    INIT,//assigned 0,1,2... by default and by convention written in all caps
    MENU,//1 default
    PLAY=7//2 default
};
int main()
{
    enum GameState gs=PLAY;
    cout<<gs;
 return 0;
}
//Enums are good for dealing with state of applications
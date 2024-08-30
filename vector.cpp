//vectors are like dynamic arrays
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec1={1,2,3,4,5};
    vec1.push_back(10);//added an element to the last of the vector
    cout<<vec1[0]<<endl;
    cout<<vec1.at(1)<<endl;
    cout<<vec1[6]<<endl;//Garbage value
    //cout<<vec1.at(6);//Exception
    vec1.at(0)=9;
    cout<<vec1.at(0)<<endl;
    vec1.erase(2);
    for(int i:vec1)
    cout<<i<<" ";
 return 0;
}
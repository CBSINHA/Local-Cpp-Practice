#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    int age;
};
int main()
{
    Student s1;
    Student s2;
    Student s3;
    s1.name="Shashank";
    s1.roll_no=30;
    s1.age=19;
    s2.name="Animesh";
    s2.roll_no=31;
    s2.age=20;
    s3.name="Ashutosh";
    s3.roll_no=32;
    s3.age=20;
    cout<<"Student 1 details: "<<endl;
    cout<<s1.name<<" "<<s1.roll_no<<" "<<s1.age<<endl;
    cout<<"Student 2 details:"<<endl;
    cout<<s2.name<<" "<<s2.roll_no<<" "<<s2.age<<endl;
    cout<<"Student 3 details:"<<endl;
    cout<<s3.name<<" "<<s3.roll_no<<" "<<s3.age;
 return 0;
}
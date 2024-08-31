#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    int age;
    Student(){
        cout<<"From default constructor"<<endl;
    }
    Student(string name,int r,int a){
        this->name=name;//this means the public field variable.
        roll_no=r;
        age=a;
        cout<<"From overloaded constructor method"<<endl;

    }
};
int main()
{
    Student s1;
    s1.name="Shashank";
    s1.roll_no=30;
    s1.age=19;
    Student s2;
    Student s3;
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
    cout<<s3.name<<" "<<s3.roll_no<<" "<<s3.age<<endl;
    cout<<"Using constructor overloading:"<<endl;
    Student s4("Tinku Badmos",1,10);
    cout<<s4.name<<" "<<s4.roll_no<<" "<<s4.age;
 return 0;
}
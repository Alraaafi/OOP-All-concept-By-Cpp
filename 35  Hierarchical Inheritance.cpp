#include<bits/stdc++.h>
using namespace std;
//base class
class All
{
public:
    int age;
    string name;
};
//derived class-1
class student :public All
{
public:
    void setStu(){
        cout<<"Enter Student Name And Age:"<<endl;
        cin>>name>>age;
        cout<<name<<" "<<age<<endl;
        }
};

//Derive class-2
class teacher :public All
{
public:
    void setTch(){
        cout<<"Enter teacher Name And Age:"<<endl;
        cin>>name>>age;
        cout<<name<<" "<<age<<endl;
        }
};

int main()
{
    student ob1;
    teacher ob2;

    ob1.setStu();
    ob2.setTch();
}

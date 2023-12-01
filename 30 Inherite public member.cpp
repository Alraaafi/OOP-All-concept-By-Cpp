#include<bits/stdc++.h>
using namespace std;
class worker
{
public:
    string name;
    int age;
};

class info: public worker
{
public:
    int id;
    void get()
    {
        cin>>name>>age>>id;
    }
    void print()
    {
        cout<<name<<"   "<<age<<"   "<<id<<endl;
    }
};
int main()
{
    worker ob1;
    info ob2;
    ob2.get();
    ob2.print();
    /*
    ob1.age = 30;
    ob1.name ="Akkas";
    cout<<ob1.age<<"    "<<ob1.name<<endl;
    */
}

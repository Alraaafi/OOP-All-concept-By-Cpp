#include<bits/stdc++.h>
using namespace std;
class sound
{
public:
    virtual void print()=0; //pure vitul
};


class dog:public sound
{
public:
    void print(){ cout<<"Deow"<<endl;}
};

class cat:public sound
{
public:
    void print(){cout<<"Meow"<<endl;}
};

int main()
{
    sound *ptr;

    dog dg;
    cat ct;

    ptr = &dg;
    ptr->print();

    ptr = &ct;
    ptr->print();

}

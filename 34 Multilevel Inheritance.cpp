#include<bits/stdc++.h>
using namespace std;
//base class
class name
{
string n;
public:
    void setName(){cin>>n; cout<<n<<endl;};
};
//derived class-2
class id :public name
{
    int ids;
public:
    void setId(){cin>>ids; cout<<ids<<endl;}
};

//Derive class-2
class info: public id
{
public:
    void print(){setName();setId();};
};

int main()
{
    info ob;
    ob.print();
}

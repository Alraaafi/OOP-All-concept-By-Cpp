#include<bits/stdc++.h>
using namespace std;
//base class-1
class name
{
string n;
public:
    void setName(){cin>>n; cout<<n<<endl;};
};
//base class-2
class id
{
    int ids;
public:
    void setId(){cin>>ids; cout<<ids<<endl;}
};

//Derive class
class info: public name, public id
{
public:
    void print(){setName();setId();};
};

int main()
{
    info ob;
    ob.print();
}

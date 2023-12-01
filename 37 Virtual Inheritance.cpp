#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    int a;
};

class d1:virtual public base
{
public:
    int b;
};

class d2:virtual public base
{
public:
    int c;
};

class derive:public d1, public d2
{
public:
    void set()
    {
        cout<<"Enter A, B, C :  ";
        cin>>a>>b>>c;
    }
    int print()
    {
        cout<<a<<"+"<<b<<"+"<<c<<"=";
        return a+b+c;
    }
};
int main()
{
    derive obj;
    obj.set();
    cout<<obj.print();

}

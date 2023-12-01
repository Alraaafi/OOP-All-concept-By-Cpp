#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    int a;
};

class derive:public base
{
public:
    int b;
};

int main()
{
    base bs;
    derive dr;

    bs.a = 20;
    dr.a = 30;
    dr.b = 50;
    cout<<bs.a<<" "<<dr.a<<" "<<dr.b<<endl;
    base *ptr;
    ptr = &dr;

    ptr->a = 80;
    //ptr->b = 90; //not Valid

    cout<<ptr->a<<endl;
    cout<<bs.a<<" "<<dr.a<<" "<<dr.b<<endl;



}

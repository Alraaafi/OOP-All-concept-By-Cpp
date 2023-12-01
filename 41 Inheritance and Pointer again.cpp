#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    void print() {cout<<"Base Cass Call"<<endl; }
};

class derive : public base
{
public:
    void print() {cout<<"Derived Cass Call"<<endl; }
    //print funciton na takle base calss er print fn call hoto
};
int main()
{
    base *ptr;
    derive dr;
    //base bs;

    ptr = &dr;
    ptr->print();

}

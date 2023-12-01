#include<bits/stdc++.h>
using namespace std;
void ecpt(int a) throw(double) //it's called Unexpected. because, wrong double
{
        if(a==1) throw  1;
        if(a==2) throw  2.9;
}
void t()
{
    cout<<"terminated"<<endl;
}
void u()
{
    cout<<"unexpected"<<endl;
}
int main()
{
    set_unexpected(u);
    set_terminate(t);
    try
    {
        int a;
        cin>>a;
        ecpt(a);
    }
    catch(int) //it's called Terminated. because, wrong int
    {
        cout<<"Exception Detected"<<endl;
    }


    //Alraafi
}

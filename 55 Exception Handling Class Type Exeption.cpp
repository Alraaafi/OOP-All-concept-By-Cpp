#include<bits/stdc++.h>
using namespace std;
class expt
    {
    public:
        int id;
        string str;
        expt(int i, string st){ id=i; str = st; }
        void print() {cout<<id<<"    -is not invalid for: "<<str<<endl;}
    };
void num(int a)
{
    cout<<a<<endl;
    try
    {
        if(a<1){ throw expt(1,"NEGATIVE"); }
    }
    catch(expt ex)
    {
        ex.print();
    }
}
int main()
{
    num(7);
    num(-34);
    num(99);
    //Alraafi
}

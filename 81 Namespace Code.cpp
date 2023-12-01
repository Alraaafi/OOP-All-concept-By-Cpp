#include<bits/stdc++.h>
using namespace std;

namespace NS
{
    int a;

    class A
    {
    public:
        void print(){ cout<<"I am Class!!"<<endl;}
    };

    void fn()
    {
        cout<<"i am function!"<<endl;
    }
}
int main()
{
    NS::a = 10;
    cout<<NS::a<<endl;

    NS::A obj;
    obj.print();

    NS::fn();
}

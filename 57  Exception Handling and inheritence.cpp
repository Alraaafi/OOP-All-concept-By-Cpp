#include<bits/stdc++.h>
using namespace std;

class base
{

};
class derive : public base
{

};

int main()
{
    base b;
    derive d;
    try
    {
        throw  d;
    }
    catch(derive e)
    {
        cout<<"derived class Exception"<<endl;
    }
    catch(base e)
    {
        cout<<"Base class Exception"<<endl;
    }

    //Alraafi
}

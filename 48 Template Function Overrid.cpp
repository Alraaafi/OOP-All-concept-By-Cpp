#include<bits/stdc++.h>
using namespace std;

template<class typ1, class typ2>
void shaw(typ1 a, typ2 b)
    {
        cout<<a<<"  "<<b<<endl;
    }

template<class typ1>
void shaw(typ1 a)
    {
        cout<<a<<endl;
    }

void shaw(double d)
{
    cout<<"Function Overrideed!!!"<<endl;
}
int main()
{
   shaw(4,8.99);
   shaw("tanvir","rafi");
   shaw(7);
   shaw("ahmed");
   shaw(11,"tanvir");

   cout<<endl;
   shaw(9.999); //override call
    //Alraafi
}

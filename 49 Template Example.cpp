#include<bits/stdc++.h>
using namespace std;

template<class dataType>
void swp(dataType &var1, dataType &var2)
{
    dataType temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}
int main()
{
    int a=10,b=20;
    double c=10.888,d=20.777;
    string e="Tanvir",f="rafi";

    cout<<"Before: "<<endl;
    cout<<a<<"  "<<b<<endl;
    cout<<"After: "<<endl;
    swp(a,b);
    cout<<a<<"  "<<b<<endl<<endl;

    cout<<"Before: "<<endl;
    cout<<c<<"  "<<d<<endl;
    cout<<"After: "<<endl;
    swp(c,d);
    cout<<c<<"  "<<d<<endl<<endl;


    cout<<"Before: "<<endl;
    cout<<e<<"  "<<f<<endl;
    cout<<"After: "<<endl;
    swp(e,f);
    cout<<e<<"  "<<f<<endl<<endl;




    //Alraafi
}

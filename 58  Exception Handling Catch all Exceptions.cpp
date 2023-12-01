#include<bits/stdc++.h>
using namespace std;
int main()
{
    try
    {
        int a;
        cin>>a;
        if(a==1) throw  1;
        if(a==2) throw  2.9;
        if(a==3) throw  "rafi";
        if(a==4) throw  true;
        else cout<<"Not Exception"<<endl;
    }
    catch(...)
    {
        cout<<"Exception Detected"<<endl;
    }


    //Alraafi
}

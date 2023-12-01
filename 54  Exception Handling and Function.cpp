#include<bits/stdc++.h>
using namespace std;
void dv(int a, int b)
{

    try
    {
        if(b==0)
            throw -1;
        else
            cout<<a/b<<endl;
    }
    catch(int v)
    {
        cout<<"Impossible: "<<v<<endl;
    }
}
int main()
{
    dv(45,6);
    dv(77,0);
    dv(345,12);
    //Alraafi
}

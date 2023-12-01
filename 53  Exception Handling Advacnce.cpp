#include<bits/stdc++.h>
using namespace std;
int main()
{
    try
    {
        cout<<"Try"<<endl;
        throw 99;
        //after these All line not execute in program
        cout<<"My Result"<<endl;
    }

    catch(int a) //only throw return type will be...
    {
        cout<<"Catch : "<<a<<endl;
    }
    //Alraafi
}

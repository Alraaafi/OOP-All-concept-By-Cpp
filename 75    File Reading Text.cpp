//#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in("74file.txt");
    if(in)
    {
        string str;
        in>>str;
        cout<<str<<endl;
        in.close();
    }
    else{
        cout<<"Faild";
    }
}

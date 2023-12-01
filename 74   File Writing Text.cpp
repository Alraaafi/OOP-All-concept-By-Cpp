//#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //output - file write
    ofstream fl("74file.txt");
    if(fl)
    {
        fl<<"the tesring rafi od done"<<endl;
        fl.close();
    }
    else{
        cout<<"Faild";
    }
}

//#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //output - file write
    ofstream fl;
    fl.open("73text.txt");
    if(fl)
        cout<<"output file open"<<endl;
    else
        cout<<"output file Cant Not"<<endl;;
    fl.close();

    //input - file write
    ifstream fl2;
    fl2.open("73in.txt");
    if(fl2)
        cout<<"file 2 open"<<endl;
    else
        cout<<"file-2 not opean"<<endl;
    fl2.close();
}

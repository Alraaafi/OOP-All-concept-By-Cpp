#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ifstream in("77in.txt");
   ofstream out("77in.txt", ios::app);

   out<<"hello-bangladesh.";
   //cout<<out.tellp()<<endl;

   out.flush();

   string str;
   in>>str;
   //cout<<in.tellg()<<endl;
   cout<<str<<endl;

   in.close();
   out.close();

}

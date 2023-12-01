#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ifstream in("77in.txt");
   if(!in)
    cout<<"faild"<<endl;
   else
   {
       char str[200];
       //in>>str; //only input one word

       while(!in.eof())
       {
           in.getline(str,200);
           cout<<str<<endl;
       }

       in.close();
   }
}

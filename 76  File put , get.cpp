#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //input by character: (file read)
    ifstream in("76in.txt");
    if(!in)
        cout<<"faild"<<endl;
    else
    {

        while(in)
        {
          char ch;
          in.get(ch);
          cout<<ch;
        }
        in.close();
    }


    //output by character: (file write)
    ofstream out("76in.txt");
    if(!out)
    {
        cout<<"faild"<<endl;
    }
    else{
        char str[100] = "Ami Coding kori.";
        int i=0;
        while(str[i]=!'.')
        {
            out.put(str[i]);
            i++;
        }
        out.close();
    }
}

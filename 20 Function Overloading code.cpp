//#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>


using namespace std;
//fn-1
int add(int a, int b)
{
    return a+b;
}

//fn-2
int add(int a, int b,int c)
{
    return a+b+c;
}

//fn-3
double add(double a, double b)
{
    return (a+b)*10;
}

//fn-4
float add(float a, float b)
{
    return a+b;
}

//fn-5
char add(char a, char b)
{
    return a+b;
}
int main()
{
    //cout<<setprecision(3);
    //cout<<fixed;
    cout<<add(3,5)<<endl<<endl;

    cout<<add(3,5,2)<<endl<<endl;

    cout<<add(4.5,4.2)<<endl<<endl;

    int a = 2.3, b = 3.2;
    cout<<add((float)a,(float)b)<<endl<<endl;

    cout<<add((char)33,'A')<<endl<<endl;

    double c = 5.77;
    cout<<c<<endl<<endl;

    return 0;
}

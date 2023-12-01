#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"nomal or genaral: "<< 12.53 <<endl;

    cout.setf(ios::showpoint);
    cout<<"use showpoint: "<< 112.53 <<endl;

    cout.setf(ios::scientific);
    cout<<"use scientific: "<< 112.53 <<endl;

    cout.setf(ios::uppercase);
    cout<<"use uppercase: "<< 112.53 <<endl;

    cout.setf(ios::showpos);
    cout<<"use showpositive: "<< 112.53 <<endl;

    cout.unsetf(ios::scientific); //unsetf
    cout.unsetf(ios::showpos);
    cout.unsetf(ios::dec);

    cout.setf(ios::hex);
    cout.setf(ios::showbase);
    cout<<"use showbase with hex: "<< 112 <<endl;

    //multiple ios:
    //cout.setf(ios::flag1 | ios::flag2 | ios:: flagN);


    //Alraafi
}

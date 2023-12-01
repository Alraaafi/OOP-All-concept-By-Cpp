#include<bits/stdc++.h>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

void add(int a)
{
    cout<<a<<endl;
}

int main()
{
    int (*ptr1) (int,int);
    void (*ptr2) (int);

    ptr1 = &add;
    ptr2 = &add;

    cout<<"Adress of ptr1 = " << ptr1<<endl<<endl;

    cout<<"Value of ptr1 = " << ptr1(6,4)<<endl<<endl;

    ptr2(55);


    return 0;
}

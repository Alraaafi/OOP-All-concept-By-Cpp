#include<bits/stdc++.h>
using namespace std;

class pairNum
{
private:
    int a;
    int b;
public:
    pairNum(){a=0; b=0;};
    pairNum(int x, int y)
    {
        a = x;
        b = y;
    }
/*
    void get(int &x, int &y)
    {
        x = a;
        y = b;
    }

    void set(int x, int y)
    {
        a = x;
        b = y;
    }
*/

    void print()
    {
        cout<<a<<"  "<<b<<endl;
    }

    void operator ++ ();
};

void pairNum :: operator++()
{
    pairNum tmp(a++,b++);
    /*
    a++;
    b++;
    tmp.a = a;
    tmp.b = b;
    return tmp;
    */
}

int main()
{
    pairNum ob(3,7);
    cout<<"Before:  ";   ob.print();

    ++ob;
    cout<<"After:  ";   ob.print();
}

#include<bits/stdc++.h>
using namespace std;
class pairNum
{
private:
    int a;
    int b;
public:
    pairNum(){a=0; b=0;};
    pairNum(int x, int y){ a = x; b = y; }
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

    void print(){ cout<<a<<"  "<<b<<endl; }

    friend pairNum operator + (pairNum o1, pairNum o2)
    {
        pairNum tmp;
        //return tmp(o1.a+o2.a,o1.b+o2.b);
        tmp.a = o1.a + o2.a;
        tmp.b = o1.b + o2.b;
        return tmp;
    }
};

int main()
{
    pairNum ob1(3,7),ob2(2,3),ob3;
    cout<<"2 data are:  "<<endl;
    ob1.print();
    ob2.print();

    ob3 = ob1 + ob2;

    cout<<"Sum Data:  "<<endl;
    ob3.print();
}

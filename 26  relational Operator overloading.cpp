#include<bits/stdc++.h>
using namespace std;
class sum
{
private:
        int x;
        int y;
public:
    sum()
    {
        x =0;
        y =0;
    }

    sum(int a, int b)
    {
        x =a;
        y =b;
    }
    void get(int &a, int &b)
    {
        a = x;
        b = y;
    }
    void set(int a, int b)
    {
        x =a;
        y =b;
    }

    void print()
    {
        cout<<x<<" "<<y<<endl;
    }


    sum operator + (sum op);
    bool operator > (sum op);
    bool operator < (sum op);
    bool operator == (sum op);
};

sum  sum :: operator + (sum op)
{
    sum tmp;
    tmp.x = x + op.x;
    tmp.y = y + op.y;
    return tmp;
}

bool sum :: operator > (sum op)
{
    return x+y > op.x+op.y;
}

bool sum :: operator < (sum op)
{
    return x+y < op.x+op.y;
}

bool sum :: operator == (sum op)
{
    return x+y == op.x+op.y;
}

int main()
{
    sum a(55,2),b(5,8),c;
    c = a + b;
    c.print();


    if(a>b)
        cout<<"a is Big"<<endl;
    else if(a<b)
        cout<<"b is Big"<<endl;
    else if(a==b)
        cout<<"a and b is equal!"<<endl;

}

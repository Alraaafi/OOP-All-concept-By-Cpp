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
};

sum  sum :: operator + (sum op)
{
    sum tmp;
    tmp.x = x + op.x;
    tmp.y = y + op.y;
    return tmp;
}

int main()
{
    sum a(4,6),b(6,6),c;
    c = a + b;
    c.print();
}

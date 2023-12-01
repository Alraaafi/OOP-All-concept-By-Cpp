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

    bool operator && (sum op);

};

bool sum  :: operator && (sum op)
{
    return (x && y) && (op.x && op.y);
}

int main()
{
    sum a(55,2),b(5,8);

    if(a&&b)
        cout<<"No Zero Exist!"<<endl;
    else
        cout<<"ZOROOOOO Found!"<<endl;

}

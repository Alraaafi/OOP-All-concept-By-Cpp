#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    int a;
    int get()
    {
        //a = x;
        return a;
    }
};

class derive : public base
{
public:
    int a;
    int set()
    {
        return a + get();
    }
};
int main()
{
    derive ob;
    ob.base::a=5;
    ob.a = 10;
    cout<<ob.set()<<endl;
    cout<<ob.a<<endl;

}

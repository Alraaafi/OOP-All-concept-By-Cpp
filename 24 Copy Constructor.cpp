#include<bits/stdc++.h>
using namespace std;
class test
{
public:
    test()
    {
        cout<<"Const..."<<endl;
    }
    ~test()
    {
        cout<<"Distrac..."<<endl;
    }
};

int main()
{
    test a;
    test b = a;

    return 0;
}

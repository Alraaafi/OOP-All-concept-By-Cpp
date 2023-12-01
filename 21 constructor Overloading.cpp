#include<bits/stdc++.h>
using namespace std;

class cname
{
private:
    int result;
public:
    cname()
    {
        result = 0;
    }

    cname(int a)
    {
        result = a;
    }

    cname(int a, int b)
    {
        result = a+b;
    };

    int show()
    {
        return result;
    }
};
int main()
{
    cname o1,o2(5),o3(5,6);

    cout<<o1.show()<<endl<<endl;

    cout<<o2.show()<<endl<<endl;

    cout<<o3.show()<<endl<<endl;


    return 0;
}

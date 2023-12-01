#include<iostream>
//public privet protected
using namespace std;
class multi
{
private:
    int a,b;
public:
    int m();
    void take(int, int);
};

void multi ::take(int x, int y)
{
    a = x;
    b = y;
}

int multi ::m()
{
    return a*b;
}

int main()
{
    multi result;
    result.take(5,6);
    printf("result: %d\n",result.m());
}

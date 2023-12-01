#include<iostream>
using namespace std;
class value
{
public:
    int x;
    int fn(int k) const
    {
        //x = k; wrong
        k = x+23;
    }
};
int main()
{
    //const int a = 10;
    //cout << a << endl;
}

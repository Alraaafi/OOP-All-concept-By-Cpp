#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    int x;
    int y;
    A(int a, int b) : x(a),y(b) {}
};
int main()
{
    A obj(3,2);
    cout<<obj.x+obj.y<<endl;
}

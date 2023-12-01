#include<bits/stdc++.h>
using namespace std;
void num()
{
    static int a;
    int b=2;
    a++;
    b++;
    cout<<a<<"  "<<b<<endl;
}
int main()
{
    num();
    num();
    num();
    num();
    num();
}

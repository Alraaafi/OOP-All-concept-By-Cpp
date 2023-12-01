#include<iostream>
int global = 9;
using namespace std;
int main()
{
    int v1,v2;
    v1 = 10, v2 = 25;
    {
        int v3 = v1+v2;
        cout << v3 << endl;
    }
    cout << global << endl;

}

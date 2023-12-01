#include<iostream>
using namespace std;
int main()
{
    int a;
    a = 10;
    int *ptr;
    ptr = &a;

    cout << a << endl;
    cout << *ptr << endl;

    int& rf = a; //reference its similer to pointer
    rf = 33;
    cout << "USING REF: " << endl;
    cout << *ptr << endl;
    cout << a << endl;
    cout << rf << endl;
}

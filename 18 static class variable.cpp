#include<iostream>
using namespace std;
class value
{
public:
    int x;
    static int y;
    void fn()
    {
        cout <<"x = " <<++x<<"    "<<" y = " <<++y<<endl;
    }
    value() {x = 5;}
};
int value :: y;
int main()
{
    value ob1,ob2;
    ob1.fn();
    ob1.fn();
    ob2.fn();

    //const int a = 10;
    //cout << a << endl;
}

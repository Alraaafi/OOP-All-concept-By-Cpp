#include<iostream>
using namespace std;
class mean
{
private:
    int num1;
    int num2;
public:
    void set(int ,int);
    int sum();
};

void mean :: set(int a, int b)
{
    num1 = a;
    num2 = b;
}
int mean :: sum()
{
    return num1 + num2;
}
int main()
{
    mean v1,v2;
    v1.set(20,10);
    v2.set(7,8);
    cout << v1.sum() << endl;
    cout << v2.sum() << endl;

    cout << "AFTER CLASS ASSIGN: " << endl;
    v2 = v1;
    cout << v1.sum() << endl;
    cout << v2.sum() << endl;
}

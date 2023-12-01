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
    mean v[5];
    v[0].set(20,10);
    v[1].set(35,15);
    v[2].set(3,13);
    v[3].set(54,43);
    v[4].set(43,12);

    for(int i=0; i<5; i++)
        cout << v[i].sum() << endl;
}

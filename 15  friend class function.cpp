#include<iostream>
using namespace std;
class mean;
class total;

class mean
{
private:
    int num1;
    int num2;
public:
    void set(int ,int);
    int sum();\
    //friend class total; or
    friend class total;
};

class total
{
    int perUnit;
public:
    void setv(int a) {perUnit = a;}
    int all(mean ob)
    {
        return perUnit*(ob.num1 +ob.num2);
    }

};

void mean :: set(int num1, int num2)
{
    this->num1 = num1; //point the original class variable
    this->num2 = num2;
}
int mean :: sum()
{
    return num1 + num2;
}

int main()
{
    mean v;
    v.set(9,6);

    total u;
    u.setv(10);

    cout << v.sum() << endl;
    cout << u.all(v) << endl;
}

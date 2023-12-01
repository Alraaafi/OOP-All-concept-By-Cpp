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
    v.set(6,7);
    cout << v.sum() << endl;
}

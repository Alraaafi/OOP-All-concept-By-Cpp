#include<iostream>
int global = 9;
using namespace std;
class rec
{
private:
    int h;
    int w;
public:
    rec(int,int);
    int area();
    ~rec();
};
rec :: rec(int a,int b)
{
    h = a;
    w = b;
    cout << "CONSTRACTOR is Created!\n";
}

rec :: ~rec()
{
    cout << "DISSTRACTOR is Created!\n";
}

int rec :: area()
{
    return h*w;
}
int main()
{
    rec samp(5,6);

    cout << samp.area() << endl;

}

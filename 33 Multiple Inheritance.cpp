#include<bits/stdc++.h>
using namespace std;
class worker
{
 public:
    int exp;
    int year;
    void set();
};

class info: public worker
{
public:
    void print();
};

void worker ::set(){cin>>exp>>year;}
void info ::print(){cout<<exp<<"    "<<year<<endl;}

int main()
{
    info ob;
    ob.set();
    ob.print();
}

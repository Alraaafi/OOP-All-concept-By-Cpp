#include<bits/stdc++.h>
using namespace std;
class worker
{
protected:
    string name;
    int age;
};

class info: public worker
{
public:
    int id;
    void set()
    {
        cin>>name>>age>>id;
        cout<<name<<"   "<<age<<"   "<<id<<endl;
    }

};
int main()
{
    info ob;
    ob.set();
}

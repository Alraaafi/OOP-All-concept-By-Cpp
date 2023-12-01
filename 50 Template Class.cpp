#include<bits/stdc++.h>
using namespace std;
template<class typ>
class sample
{
public:
    typ a;
    sample(typ b){  a = b; };
    //void print() { cout<<a<<endl; } //inside
    void print();
};

//declear outside
template<class typ>
void sample<typ>::print(){ cout<<"your Answer is: "<<a<<endl;}

int main()
{
    sample<int> obj(100);
    obj.print();

    sample<string> obj1("rafi");
    obj1.print();

    //Alraafi
}

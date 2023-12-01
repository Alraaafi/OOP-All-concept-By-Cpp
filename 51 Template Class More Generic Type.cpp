#include<bits/stdc++.h>
using namespace std;

template<class typ1, class typ2>
class sample
{
public:
    typ1 a1;
    typ2  a2;
    sample(typ1 b1,typ2 b2){
        a1 = b1;
        a2 = b2;
        }
    void print() {
        cout<<a1<<"  "<<a2<<endl;
        } //inside
};


int main()
{
    sample<int,string> obj(100,"rafi");
    obj.print();

    sample<string,double> obj1("tanvir",5.9999);
    obj1.print();

    //Alraafi
}

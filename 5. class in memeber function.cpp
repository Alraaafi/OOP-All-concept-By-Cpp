#include<iostream>
using namespace std;
class triangle{
public: //there is encaptulation
    int base;
    int height;
    int area() //function or her prototype
    {
        return base*height;
    }
};
int main()
{
     triangle obj1;
     obj1.base = 20;
     obj1.height = 10;
     cout << "Area: " << obj1.area() << endl;
}

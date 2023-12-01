#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int(100); // DYNAMICALLY VALUE ALLOCATION
    *ptr  = 200;
     cout << *ptr << endl;
    delete(ptr); // MEMORY FREE

    int *parr;
    parr = new int[5]; //ARRAY ALLOCATION
    parr[3] = 30;
    parr[4] = 50;
    cout << parr[3] << endl;
    cout << *(parr+4) << endl;
    delete [] parr; //ARRAY MEMORY FREE
}

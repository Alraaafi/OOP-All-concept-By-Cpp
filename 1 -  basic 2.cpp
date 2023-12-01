#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5] = {4 ,3 , 7, 8,1};

    for(int i=0; i<5; i++)
        cout << arr[i] << " ";
    cout << endl;

    sort(arr,arr+5);
    for(int i=0; i<5; i++)
        cout << arr[i] << " ";

}

#include<bits/stdc++.h>
using namespace std;
//base class-1
class CT
{
public:
    int ct;
    void getct()
    {
        cout<<"Enter Ct Mark: "<<endl;
        cin>>ct;
    }
};

//base class-2
class attand
{
public:
    int attandMark;
    void getaAM()
    {
        cout<<"Enter attand Mark: "<<endl;
        cin>>attandMark;
    }
};

//derived class-1
class CA :public CT,public attand
{
public:
    int getcCA(){
        return ct + attandMark;
        }
};

//Derive class-2
class finalResult :public CA
{
public:
    int written;
    int theory(){
        cout<<"Enter Theory Exam Mark:"<<endl;
        cin>>written;
        return written;
        }
    int set(){
        return written+getcCA();
        }
};

int main()
{
    finalResult r1;
    r1.getaAM();
    r1.getct();
    r1.theory();
    cout<<"Your Result is:  "<<r1.set();
}

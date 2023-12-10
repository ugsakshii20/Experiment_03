#include<iostream>
using namespace std;

int main()
{
    int numpass=0;
    int numfail=0;
    int result;

    for (int i=0; i<=10;i++)
    {
        cout<<"Enter the result of the student (1 is student is fass 2 is student is fail)"<<endl;
        cin>>result;
        if (result==1)
        {
            cout<<"Student is passed"<<endl;
            ++numpass;
        }
        else if (result==2)
        {
            cout<<"Student is failed"<<endl;
            ++numfail;
        }
        else
        {
            cout<<"Enter the valid input"<<endl;
            --i;
        }
    }
    cout<<"Summery of the Students"<<endl;
    cout<<"Number of the students who passed exam is:"<<numpass<<endl;
    cout<<"Number of the students who failed exam is:"<<numfail<<endl;
    if(numpass>8)
    {
        cout<<"Raise Tuition!"<<endl;

    }
    return 0;

}

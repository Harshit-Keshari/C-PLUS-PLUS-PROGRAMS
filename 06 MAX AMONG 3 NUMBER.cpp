// WAP TO CHECK THE GREATEST ELEMENT AMONG 3 NUMBER ENTERED BY THE USER

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter The Value Of A and B and C ";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"A is Greatest";
        }
    }
    else if(b>c)
    {
        cout<<"B is Greatest";
    }
    else
    {
        cout<<"C is Greatest";
    }
}
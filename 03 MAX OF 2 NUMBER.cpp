// WAP TO FIND LARGEST AMONG TWO NUMBER USING NESTED IF ELSE

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Value Of A and B ";
    cin>>a>>b;
    if(a==b)
    {
        cout<<"A and B are Equal";
    }
    else
    {
        if(a>b)
        {
            cout<<"A is Greater Than B";
        }
        else
        {
            cout<<"B is Greater Than A";
        }
    }
}

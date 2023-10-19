// WAP TO FIND LARGEST AMONG 2 NUMBER USING ELSE IF

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Value Of A and B ";
    cin>>a>>b;
    if(a==b)
    {
        cout<<"Both are equal";
    }
    else if(a>b)
    {
        cout<<a<<" is Greater Than "<<b;
    }
    else
    {
        cout<<b<<" is Greater Than "<<a;
    }
    return 0;
}
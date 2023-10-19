// WAP TO CALCULATE SUM OF NATURAL NUMBER TILL N 

#include <iostream>
using namespace std;
int main()
{
    int i,n,sum;
    cout<<"Enter Any Number";
    cin>>n;
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum is "<<sum;
    return 0;
}
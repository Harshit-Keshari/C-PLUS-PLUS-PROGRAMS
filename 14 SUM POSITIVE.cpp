#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter Any Number";
    cin>>n;
    while(n>0)
    {
        sum=sum+n;
        cout<<"Enter Any Number";
        cin>>n;
    }
    cout<<"Sum Is "<<sum;

}
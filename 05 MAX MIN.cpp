// WAP TO FIND MAXIMUM AND MINIMUM AMONG TWO NUMBER

#include <iostream>
using namespace std;
int main()
{
    int n1,n2,max,min;
    cout<<"Enter The Value Of Number 1:"<<endl;
    cin>>n1;
    cout<<"Enter The Value Of Number 2"<<endl;
    cin>>n2;
    if(n1>n2)
    {
        max=n1;
        min=n2;
        cout<<"Maximum Is "<<n1<<"Minimum Is "<<n2;
    }
    else
    {
        max=n2;
        min=n1;
        cout<<"Maximum Is "<<n2<<"Minimum Is "<<n1;
    }
}
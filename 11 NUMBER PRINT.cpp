// WAP TO PRINT NUMBER UPTO N TIMES USING DO WHILE LOOP

#include <iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter any number";
    cin>>n;
    do
    {
        cout<<i<<" ";
        i++;
    }
    while(n>=i);
}
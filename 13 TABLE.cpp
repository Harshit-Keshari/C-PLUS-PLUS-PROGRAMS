// WAP TO PRINT THE TABLE UPTO 10TH TIME

#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter any Number";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<<n<<" * "<<i<<" = "<<(n*i)<<endl;
    }
    return 0;
}
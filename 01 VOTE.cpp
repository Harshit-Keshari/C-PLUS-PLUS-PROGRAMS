// WAP TO CHECK WETHER THE PERSON IS ELIGIBLE FOR VOTING OR NOT USING IF ELSE

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Your age";
    cin>>age;
    if(age>=18)
    {
        cout<<"You Can Vote";
    }
    else
    {
        cout<<"Sorry You are Not Eligible For Voting";
    }
}

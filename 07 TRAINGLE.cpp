// WAP TO CHECK THE GIVEN TRAINGLE IS EQUILATERAL,ISOSCELES OR SCALENE

#include <iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"Enter The All 3 Sides Of Traingle";
    cin>>s1>>s2>>s3;
    if(s1==s2 && s2==s3)
    {
        cout<<"Equilateral Traingle";
    }
    else if(s1==s2||s1==s3||s2==s3)
    {
        cout<<"Isosceles Traingle";
    }
    else 
    {
        cout<<"Scalene Traingle";
    }
}
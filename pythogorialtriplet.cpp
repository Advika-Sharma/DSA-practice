#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three numbers: ";
    cin>>a>>b>>c;
    if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
    {
        cout<<"The numbers are pythogorial triplet";
    }
    else
    {
        cout<<"The numbers are not pythogorial triplet";
    }
    return 0;
}
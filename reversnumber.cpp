#include<iostream>
using namespace std;
int main()
{
    int i,n,r;
    cout<<"Enter the Numbers:";
    cin>>n;
    while(n>0)
    {
    r=n%10;
    cout<<r;
    n=n/10;
    }
    return 0;
}
#include <iostream>  
using namespace std;  
int main()
{
    int a=0,b=1,c;
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    cout<<a<<" "<<b<<" ";// printing 0,1
    for(int i=2;i<n;i++)// already 0,1 are print then loop start i=2
    {
        
        c=a+b;
        cout<<c;
        a=b;
        b=c;
        
    }
     return 0;
}
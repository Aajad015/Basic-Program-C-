#include<iostream>
using namespace std;
namespace A
{
    string Z="Varanasi is place of Har Har MAHADEV";
    
}
namespace A
{
    int h=10,b=15;
    int d;
    d=h+b;
    
}
namespace S
{
    float p=15012.263;
    
}
int main()
{
    int Num =15;
    cout<<A::Z<<"\n";
    cout<<S::p<<"\n";
    cout<<Num<<"\n";
    cout<<A::d;
    return 0;
}
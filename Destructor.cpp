#include<iostream>
using namespace std;
class F
{
public:
F()
{
    cout<<"This is first Block"<<"\n";
}
~F()
{
    cout<<"This is Decostructor Block"<<"\n";
}

    
};
int main()
{
    F k;{
        int a=10,b=25;
         int c=a+b;
        cout<<"c"<<"\n"<<c;
        F k1,k2;//
    }
    //F k1,k2;//both are same in block k1 & k2 or outer block k1 & k2
    return 0;
}
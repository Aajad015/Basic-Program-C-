#include<iostream>
using namespace std;
class Z
{
private:
    int a,b;
public:
   Z()
   {
      
   }
    Z(int x,int y)
    {
        a=x;
        b=y;
        cout<<"1st"<<"\n";;
        
    }
    
    Z(float x,int y)
    {
        a=x;
        b=y;
        cout<<"2nd"<<"\n";;
        
        
    }
    
    Z(double x,double y)
    {
        a=x;
        b=y;
        cout<<"3rd"<<"\n";;
        
    }
    
    Z(char x,char y)
    {
        a=x;
        b=y;
        cout<<"4th"<<"\n";
        
        
    }
    void show()
    {
        cout<<"a"<<a <<"\n"<<"b"<<b;
    }
    
};
int main()
{
    Z p(1,3);
    p.show();
    Z p1(12.22f,45);
    p1.show();
    Z p2(88.33,89.366);
    p2.show();
    return 0;
}
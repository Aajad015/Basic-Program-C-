#include<iostream>
using namespace std;
class A
{
   private:
    int a;  
      public:
    void get() 
    {
         cin>>a;
         //cout<<"A-"<<a;
    }
    void dis()
    {
       cout<<"A-"<<a; 
    }
};
int main()

{
    A obj;
    obj.get();
    obj.dis();
     obj.dis();
    
    return 0;
}
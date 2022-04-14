#include<iostream>
using namespace std;
class A
{
   private:
    int a;  //4 byte
      public:
    void get(int x) //4 byte
    {
        //x=a;//meroty wate.
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
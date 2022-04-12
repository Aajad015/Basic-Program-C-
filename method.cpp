#include<iostream>
using namespace std;
class A
{
 private:
    string name;
    int age;
    int long salary;
 public:
 
     void get_data()
    {
     cout<<"Enter Name";
     cin>>name;
     cout<<"Enter Age";
     cin>>age;
     cout<<"Enter Salary";
     cin>>salary;

    }
    void put_data()
    {
        cout<<"Name  "<<name<<"\n";
        cout<<"Age  "<<age<<"\n";
        cout<<"Salary  "<<salary<<"\n";
    }
};
  int main()
 {
     A obj,obj1,obj2;
     obj.get_data();
     obj1.get_data();
     obj2.get_data();
     obj.put_data();
     obj1.put_data();
     obj2.put_data();
     
   return 0;

 }
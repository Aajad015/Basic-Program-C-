#include<iostream>
using namespace std;
class B
{
private:
    int long hra,da,food,sal,gsal,netsal,HRA,DA,FOOD;
    
public:  
       int get_data()
{
     cout<<"Enetr Salary";
     cin>>sal;
     cout<<"HRA :";
     cin>>hra;
     cout<<"DA :";
     cin>>da;
     cout<<"FOOD :";
     cin>>food;
    HRA=sal*hra/100;
    DA=sal*da/100;
    FOOD=sal*food/100;
    gsal=sal+HRA+DA+FOOD;
  netsal=gsal-sal;
  return gsal;
}
    void put_data()
    {
          if(sal>20000)
          cout<<"Gsalary  :"<<gsal;
          else if(sal>40000)
          cout<<"Gsalary  :"<<gsal;
          else if(sal>90000)
          cout<<"Gsalary  :"<<gsal;
          else
          cout<<"Can not find Salary:";
          cout<<"\n";
          cout<<"NetSalary :"<<netsal;
    }
    
};
int main()
{
    B obj;
    obj.get_data();
    obj.put_data();

    return 0;
}
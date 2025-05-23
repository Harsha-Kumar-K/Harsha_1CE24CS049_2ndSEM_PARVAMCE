/*
  1. function declaration or prototype ---> return_type_functuion(parameter)
  2.function defination
        return_type name_fun(..parameter)
  3. function call
        res=name_function(arguement)*/
#include<iostream>
using namespace std;
   // cout<<"sum1"<<sum<<endl;
int add(int num1,int num2);
int main()
{
    //function call
    int a=10;
    int b=20;
    int res=add(a,b);
    cout<<"The Result is:"<<res<<endl;
    int c=10;
    int d=20;
    int res1=add(c,d);
    cout<<"The Result-1 is:"<<res1<<endl;
}
   // function defination
int add(int num1,int num2)
{
int sum=num1+num2;
 return sum;
}

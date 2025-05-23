#include<iostream>
using namespace std;
   // cout<<"sum1"<<sum<<endl;
int add(int num1,int num2);
int main()
{
    //function call
    int a,b;
    cout<<"Enter value of a:"<<endl;
    cin>>a;
    cout<<"Enter value of b:"<<endl;
    cin>>b;
    int res=add(a,b);
    cout<<"The sum of a and b is:"<<res<<endl;
}
   // function defination
int add(int num1,int num2)
{
int sum=num1+num2;
 return sum;
}

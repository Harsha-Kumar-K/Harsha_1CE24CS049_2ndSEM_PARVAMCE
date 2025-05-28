#include<iostream>
using namespace std;
int main()
{
//variable
int a=10;
cout<<"Address of a:"<<&a<<endl;
int*ptr=&a;
cout<<"Ptr value:"<<ptr<<endl;
cout<<"Ptr address:"<<&ptr<<endl;
cout<<"value of'a' using 'a':"<<a<<endl;
cout<<"value of'a' using 'ptr':"<<*ptr<<endl;
cout<<"value of'a':"<<*(&a)<<endl;
cout<<"value of'a':"<<*(*(&ptr))<<endl;
cout<<"value of'a':"<<*(&(*ptr))<<endl;

return 0;
}
#include<iostream>
using namespace std;
//pointer to a function
void change(int*p1)
{
    *p1=*p1+90;
}
int main()
{
    //variable
    int a=10;
    int *ptr=&a;
    change(ptr);
    cout<<"The Value of 'a' :"<<a<<endl;
    return 0;
}
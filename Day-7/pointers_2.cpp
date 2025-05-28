#include<iostream>
using namespace std;
int main()
{
    //variable
    int a=10;
    int*ptr=&a;
    *ptr=101;
    //cout<<"Value of a:"<<a<<endl;
    int b=20;
    ptr=&b;
    *(&(*ptr))=30;
    cout<<"Value of a:"<<a<<endl;
    cout<<"Value of b:"<<b<<endl;
    return 0;
}
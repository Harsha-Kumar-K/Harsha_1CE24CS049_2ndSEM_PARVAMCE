#include<iostream>
using namespace std;
class sum
{
public:
    int add(int a,int b)
    {
        return a+b;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
    sum s1;
    int res=s1.add(10,30);
    cout<<"The Sum of a and b:"<<res<<endl;
    cout<<"The Sum of a,b and c:"<<s1.add(10,20,40)<<endl;
    return 0;
}

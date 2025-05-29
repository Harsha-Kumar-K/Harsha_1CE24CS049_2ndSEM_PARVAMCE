/**
 * Dynamic memory
 * ==============
 * 1.static(stack)
 * 2.dynamic(heap)
 2. dynamic memory==>
                    1.new-->to store memory
                    2.delete-->delete the stored memory
 */
#include<iostream>
using namespace std;
class Student
{
    string name;
    int roll_num;
};
int main()
{
 int a=10;
 Student s1;
 //dynamic memory
 //data_type*variable_name=new data_type
 int *a1=new int;
 *a1=20;
 cout<<"The Value in a1:"<<*a1<<endl;
 //delete
 //delete pointers_name or variable_name
 delete a1;
 return 0;
}
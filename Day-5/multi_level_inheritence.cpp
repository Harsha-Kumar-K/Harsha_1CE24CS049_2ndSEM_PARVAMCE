#include<iostream>
using namespace std;
class person
{
protected:
 string name;
 int age;
 int weight;
public:
     person(string name,int age,int weight):name(name),age(age),weight(weight)
{
    cout<<"Person contructor"<<endl;
}
};
class employee:public person
{
protected:
    int emp_id;
public:
    employee(string name,int age,int weight,int emp_id):person(name,age,weight),emp_id(emp_id)
    {
        cout<<"Employee Constructor"<<endl;
    }
};
class manager:public employee
{
int salary;
public:
manager(string name,int age,int weight,int emp_id,int salary):employee(name,age,weight,emp_id),salary(salary)
{
    cout<<"Manager Constructor"<<endl;
}
void display()
{
        cout<<"Manager Details"<<endl;
        cout<<"Manager Name:"<<name<<endl;
        cout<<"Manager Age:"<<age<<endl;
        cout<<"Manager Weight:"<<weight<<endl;
        cout<<"Employee id:"<<emp_id<<endl;
        cout<<"Manager Salary:"<<salary<<endl;
}
};
int main()
{
    manager m1("Harsha",23,50,777,2500000);
    m1.display();
}
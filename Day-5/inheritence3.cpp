#include<iostream>
using namespace std;
class person
{
protected:
     string name;
     int id;
     int hrs;
public:
    person(string name,int id,int hrs):name(name),id(id),hrs(hrs)
    {
        cout<<"Person Constructor"<<endl;
    }
};
class employe:public person
{
    int salary;
public:
    employe(string name,int id,int hrs,int salary):person(name,id,hrs),salary(salary)//initialisation
    {
       cout<<"Employe(child) Constructor"<<endl;
    }
    void display()
    {
    
        cout<<"employe Constructor"<<endl;
        cout<<"employe Name:"<<name<<endl;
        cout<<"employe id:"<<id<<endl;
        cout<<"employe Working Hours:"<<hrs<<endl;
        cout<<"employe Salary(LPA):"<<salary<<endl;
    }
};
int main()
{
    employe s1("Harsha",16,8,2500000);
    s1.display();

}
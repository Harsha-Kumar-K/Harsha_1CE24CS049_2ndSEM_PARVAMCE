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
        cout<<"Person Constructor"<<endl;
        this->weight=weight;
    }
};
class student:public person
{
    int roll_num;
public:
    student(string name,int age,int weight,int roll_num):person(name,age,weight),roll_num(roll_num)//initialisation
    {
       cout<<"Student Constructor"<<endl;
    }
    void display()
    {
    
        cout<<"Student Constructor"<<endl;
        cout<<"Student Name:"<<name<<endl;
        cout<<"Student Age"<<age<<endl;
        cout<<"Student Weight"<<weight<<endl;
        cout<<"Student Roll Number:"<<roll_num<<endl;
    }
};
int main()
{
    student s1("Harsha",19,48,7);
    s1.display();

}
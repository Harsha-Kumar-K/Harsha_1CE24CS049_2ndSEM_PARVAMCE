/* 
   INHERITENCE IN C++
   ==================
   * Extending the properties of parent(base)class to child(derived)class.
   * Properties(data members + member functions).
    
   TYPES OF INHERITENCE:
   =====================
   1. single level-parent->child;
   2. mult level-grand parent->parent->child;
   3. multipe-
              parent1     parent2
                    child
    4. hierarchical-
                    person
                student    teacher
    5. hybrid-
               the combination of more than one inhertence is called hybrid.
    6. multipath-
                    person
            youtuber       developer
                    co-developer
*/
#include<iostream>
using namespace std;
class person
{
protected:
     string name;
     int age;
     int weight;
public:
    person()
    {
        cout<<"Person Constructor"<<endl;
    }
};
class student:public person
{
    int roll_num;
public:
    student(string name,int age,int weight,int roll_num)
    {
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_num=roll_num;
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
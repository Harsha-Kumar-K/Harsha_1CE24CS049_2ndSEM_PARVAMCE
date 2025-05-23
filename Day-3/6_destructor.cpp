/*
    *destructor:
               it is a special method that will calll automatically once object is destroyed
               
    *declaration:
               the name of the destructor should be same as the class name 
    *job of destructor:
                to destroy the dynamic memory
 */
#include<iostream>
using namespace std;
class Parent{
public:
    string name;
    Parent(string name)
    {
        cout<<"Constructor called"<<endl;
        this->name=name;
    }
    void display()
    {
        cout<<"Name of Parent:"<<name<<endl;
    }
   ~Parent()
   {
      cout<<"Destructor is called"<<endl;
   }
};
int main()
{

    Parent p1("Harsha");
    p1.display();
    return 0;
}
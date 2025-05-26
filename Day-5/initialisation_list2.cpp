#include<iostream>
using namespace std;
class employee
{
    private:
        string employee_name;
        int work_hrs;
    public:
        employee(string employee_name, int work_hrs):employee_name(employee_name),work_hrs(work_hrs)
         {
            cout<<"Constructor is called"<<endl;
         }
         void display()
         {
            cout<<"Employee Name:"<<employee_name<<endl;
            cout<<"Work hours:"<<work_hrs<<endl;
         }
};
int main()
{
    //object
    employee s1("Harsha",8);
    s1.display();
}
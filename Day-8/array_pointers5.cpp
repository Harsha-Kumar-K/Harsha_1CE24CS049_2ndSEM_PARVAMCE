#include<iostream>
using namespace std;
class Student
{
private:
    string name;
    int roll_num;
public:
  void input()
  {
    cout<<"Student Name:"<<endl;
    cin>>name;
    cout<<"Student roll number:"<<endl;
    cin>>roll_num;
  }
   void display()
  {
    cout<<"Student Details"<<endl;
    cout<<"student name:"<<name<<endl;
    cout<<"Student roll number:"<<roll_num<<endl;
  }
};
int main()
{
  //int arr[3]
  Student students[3];
  for(int i=0;i<3;i++)
  {
    students[i].input();
    students[i].display();
  }

    return 0;
}
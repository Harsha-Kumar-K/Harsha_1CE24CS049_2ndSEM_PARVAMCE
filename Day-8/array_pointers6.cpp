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
    cout<<"================"<<endl;
  }
};
int main()
{
  int size;
  cout<<"Enter a size of an array:"<<endl;
  cin>>size;
  Student *students=new Student[size];
  for(int i=0;i<size;i++)
  {
     students[i].input();
    // students[i].display();
    (students+i)->display();
  }
    delete students;
    return 0;
}
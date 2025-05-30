#include<iostream>
#include<fstream>
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
/**
    * ios::in --> read mode
    * ios::out--> write mode
    * ios::app --> append mode
    * ios::end --> go for end of the file
    * ios::binary--> binary mode
    */
int main()
{
    double a=10;
    cout<<"Size of A:"<<sizeof(a)<<endl;
    Student s1;
    //wirte mode
    ofstream fout("Student.dat",ios::binary);//data file stores binary data
    s1.input();
    /**
     * write()-->method to write a binary data to file.
     * read()-->method to read  binary data to file.
     */
    fout.write((char*)&s1,sizeof(s1));
    fout.close();
    //read mode
    Student s2;
    ifstream fin("Student.dat",ios::binary);
    fin.read((char*)&s2,sizeof(s2));
    s2.display();
    return 0;

}
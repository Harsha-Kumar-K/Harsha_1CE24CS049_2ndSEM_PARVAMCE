 #include<iostream>
 #include<string>
using namespace std ;
int main(){
    int age=0;
    float marks=0;
    string gender;
    string name;
    cout<<"Enter a student age:"<<endl;
    cin>>age;
    cout<<"Enter a student marks:"<<endl;
    cin>>marks;
    cout<<"Enter a student gender:"<<endl;
    cin>>gender;
    cin.ignore(); //to clear input
    cout<<"Enter a student name:"<<endl;
    //cin>>name;
    getline(cin,name);
    cout<<"  Student details "<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Gender:"<<gender<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Marks:"<<marks<<endl;
    return 0;
}
    
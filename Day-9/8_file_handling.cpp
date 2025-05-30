#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    //opening file in append mode
    fout.open("1_file_handling.txt",ios::app);
    fout<<"welcome to Earth";
    fout.close();
    cout<<"File is closed"<<endl; 
}
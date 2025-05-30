#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
     ofstream fout;
     fout.open("3_file_handling.txt");
     fout<<"Boohya";
     fout.close();
    cout<<"file is successfully closed"<<endl;   

     ifstream fin("3_file_handling.txt");
    string line;
    while (getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
     
}
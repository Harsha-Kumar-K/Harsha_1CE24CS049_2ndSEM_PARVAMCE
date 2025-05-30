#include<iostream>
#include<fstream>
#include<sstream>//string steam--->uses in get(),put().
using namespace std;
int main()
{
    ifstream fin("1_file_handling.txt");//opening for reading
    string line;
    while (getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
     
}
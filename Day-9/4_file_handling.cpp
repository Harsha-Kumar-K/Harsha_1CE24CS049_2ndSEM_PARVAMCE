#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
    ofstream fout("4_file_handling.txt");
    fout.put('h');
    fout.close();
    
    ifstream fin("4_file_handling.txt");
    char v1;
    fin.get(v1);
    fin.close();
    cout<<"The Value is :"<<v1<<endl;
}
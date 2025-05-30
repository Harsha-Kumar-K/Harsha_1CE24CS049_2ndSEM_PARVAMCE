#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    int res=a+b;
    cout<<"sum is:"<<res<<endl;
    ofstream fout("4_filehandling.txt");
    fout<<res<<endl;
    fout.close();
    ifstream fin("4_filehandling.txt");
    string line;
    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
}
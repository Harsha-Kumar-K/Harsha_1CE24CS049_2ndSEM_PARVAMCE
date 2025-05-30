/*File handling in c++
=====================
1. header file used to handle files - fstream(file stream)
2. class used to write a file - ofstream(output file stream)
3. class used to read data from file - ifstream(input stream)
-------------------------------------------------------------
(a) put() - to insert a single data to a file
(b) getline()-to get a entire line from a file
(c) get()-to get a single data from a file
(c) open()-to open a file
(d) close()-to close a file
(e) seekg()-to move cursor in a file
(f) tellg()-to tell the position of cursor in a file and the return value is int
(g) write()-method to write binary data into a file
(h) read()-method to read binary data from a file
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //creating object for writing file
    ofstream fout;
    //opening file in write mode
    fout.open("1_file_handling.txt");//It will open the file in write mode.If file is not present in the 'cwd'it will create a new file with specified name.
    //insert some data
    fout<<"Hello World\n";
    //close the file
    fout.close();
    cout<<"File is closed"<<endl; 
}
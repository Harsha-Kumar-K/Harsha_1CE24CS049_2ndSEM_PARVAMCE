//constructor-it is a special type of method that will call automatically when object is created.
//By default compiler will provide default contructor
//constructor name should be same as class name
//constructor does not have return type
#include<iostream>
using namespace std;
class BankAcc{
    //data members or properties
    public:
    string holder_name;
    int acc_no;
    //constructor
    //default constructor or no-arguement constructor
    BankAcc()
    {
        cout<<"Constructor is called automatically"<<endl;
    }
};
int main(){
    BankAcc b1;
    return 0;
}
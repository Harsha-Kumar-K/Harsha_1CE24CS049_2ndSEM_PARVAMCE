#include<iostream>
using namespace std;
class BankAcc{
    //data members or properties
    public:
    string holder_name;
    int acc_no;
    //constructor
    // all-args constructoror full-args constructor.
    BankAcc(string name,int acc_no)
    {
        cout<<"Constructor is called automatically"<<endl;
        holder_name=name;
        acc_no=acc_no;
    }
    void display(){
        cout<<"Holder name:"<<holder_name<<endl;
        cout<<"Account number:"<<acc_no<<endl;
    }
};
int main(){
    BankAcc b1("Harsha",007);
    b1.display();
    return 0;
}
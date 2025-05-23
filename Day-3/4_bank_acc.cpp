/*
*types of constructor:
  1.Default constructor
  2.copy constructor
  3.parametric constructor==>two types:
                                        1.full args constrctor
                                        2.args constructor
  */
#include<iostream>
using namespace std;
class BankAcc{
    //data members or properties
    public:
    string holder_name;
    int acc_no;
    //construction overloading==> same name but different parameters
//this-->keyword that refers to current class instance(object)
    BankAcc()
    {
        cout<<"Default Constructor"<<endl;
        this->holder_name="unknown";
        this->acc_no=0;
    }
    BankAcc(string name,int acc_no)
    {
        cout<<"Constructor is called automatically"<<endl;
        holder_name=name;
        acc_no=acc_no;
    }
    void display(){
        cout<<"Holder name:"<<this->holder_name<<endl;
        cout<<"Account number:"<<acc_no<<endl;
        cout<<"======="<<endl;
    }
};
int main(){
    BankAcc b1;
    BankAcc b2("Harsha",007);
    b1.display();
    b2.display();
    return 0;
}
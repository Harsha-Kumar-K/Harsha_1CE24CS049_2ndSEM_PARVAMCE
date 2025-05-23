#include<iostream>
using namespace std;
class BankAcc{
    //data members or properties
    public:
    string holder_name;
    int acc_no;
};
int main(){
    BankAcc b1;
    b1.holder_name="Harsha";
    b1.acc_no=007;

    cout<<"Holder Name:"<<b1.holder_name<<endl;
    cout<<"Account Number"<<b1.acc_no<<endl;
    return 0;
}
/* 
g++ 1_bank_acc.cpp -o  bank.exe
./bank
*/
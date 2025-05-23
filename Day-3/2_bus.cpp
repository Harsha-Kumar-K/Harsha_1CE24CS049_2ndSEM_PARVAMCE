#include<iostream>
using namespace std;
class BusDetails{
    //data members or properties
    public:
    string customer_name;
    int seat_no;
    //constructor
    // all-args constructoror full-args constructor.
    BusDetails(string name,int seat_no)
    {
        cout<<"Constructor is called automatically"<<endl;
        this->customer_name=name;//
        this->seat_no=seat_no;
    }
    void display(){
        cout<<"Customer name:"<<customer_name<<endl;
        cout<<"Seat number:"<<seat_no<<endl;
    }
};
int main(){
    BusDetails b1("Harsha",007);
    b1.display();
    return 0;
}
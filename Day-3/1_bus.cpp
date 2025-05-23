#include<iostream>
using namespace std;
class BusDetails{
    //data members or properties
    public:
    string Bus_name;
    string Bus_no;
    string Bus_time;
    string Bus_venue;
};
int main(){
    BusDetails b1;
    b1.Bus_name="SRS TRAVELS";
    b1.Bus_no="KA-01-F-007";
    b1.Bus_time="8:30AM";
    b1.Bus_venue="UB city,blr";


    cout<<"Bus Name:"<<b1.Bus_name<<endl;
    cout<<"Bus NumberPlate:"<<b1.Bus_no<<endl;
    cout<<"Bus timings:"<<b1.Bus_time<<endl;
    cout<<"Bus Venue:"<<b1.Bus_venue<<endl;
    return 0;
}
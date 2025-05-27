#include<iostream>
using namespace std;
class Message
{
public:
    string sendMessage(string email_id,string message)
    {
        cout<<"message1 sent successfully"<<endl;
        cout<<"email id:"<<email_id<<endl;
        cout<<"message:"<<message<<endl;
    }
    int sendMessage(int phone_Number,int OTP)
    {
        cout<<"message2 sent successfully"<<endl;
        cout<<"phone no:"<<phone_Number<<endl;
        cout<<"otp:"<<OTP<<endl;
    }
};
int main()
{
    Message m1;
    m1.sendMessage("Harsha@gmail.com","hi");
    m1.sendMessage(111,17);
    return 0;
}
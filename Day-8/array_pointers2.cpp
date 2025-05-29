/*
*count of even and odd in an array using pointers
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[8]={1,2,3,4,5,6,7};
    int *ptr=arr;
    int evenCount=0,oddCount=0;
    for(int i=0;i<7;i++)
    {
        if((i[ptr]%2)==0)
        {
            evenCount++;//evenCount=evenCount+1
        }
        else
        {
            oddCount++;
        }
    }
    cout<<"Even Count:"<<evenCount<<endl;
    cout<<"odd Count:"<<oddCount<<endl;

}
   
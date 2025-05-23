#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    printf("The original numbers:%d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swapped numbers :%d %d\n",a,b);
    return 0;
}
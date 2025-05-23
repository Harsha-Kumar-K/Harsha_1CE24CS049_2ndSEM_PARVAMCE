#include<stdio.h>
int main()
{
    int num=0,rev=0,org=0,digit=0;
    printf("Enter a no:");
    scanf("%d",&num);
    org=num;
    printf("Enter the original no:%d\n",org);
    while(num>0){
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
printf("Reverse no :%d\n",rev);
if(org==rev){
    printf("it is palindrome");
}
else{
    printf("not a palindrome");
}
return 0;
}

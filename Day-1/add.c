#include<stdio.h>
int main(){
    int a=0,b=0;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);//&:ampercent which will address the variable
    printf("Sum of a and b is :%d",(a+b));
    return 0;
}
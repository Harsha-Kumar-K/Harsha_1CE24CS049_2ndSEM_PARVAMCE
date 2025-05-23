#include<stdio.h>
int main(){
    int num;
    printf("Enter a number to get a tables:");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("%d*%d: %d\n",num,i,i*num);
    }
     
}
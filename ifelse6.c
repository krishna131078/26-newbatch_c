#include<stdio.h>
int main()
{
    int num;
    printf("enter the num");
    scanf("%d",&num);
    if(num>0)
    {
        printf("no is pos");
    }
    else if(num<0)
    {
        printf("no is negative");

    }
    else{
        printf("no is zero");
    }
}
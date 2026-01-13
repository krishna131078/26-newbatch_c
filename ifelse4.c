#include<stdio.h>
int main()
{
    int n;
    printf("enter the num");
    scanf("%d",&n);
    if(n%5==0 || n%7==0)
    {
        printf("no is divisible by both");
    }
    else{
        printf("no is not divisible by both");

    }

}
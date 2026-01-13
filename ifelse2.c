#include<stdio.h>
int main()
{
    int n;
    
    printf("enter the name");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("no is even");//4%2==0//yes
    }
    else{
        printf("no is odd");
    }
}
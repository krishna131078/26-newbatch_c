// user---->5--->pos--->neg-->
#include<stdio.h>
int main()
{
    int num,a;
    printf("enter the num");
    scanf("%d%d",&num,&a);
    if(num>0)
    {
        if(num%2==0)
        {
            printf("no is even pos");
            printf("%d",num+a);
        }
        else{
            printf("no is odd pos");
            printf("%d",num*a);
        }
    }
    else{
        if(num%2==0)
        {
            printf("no is even neg");
            printf("%d",num-a);
        }
        else{
            printf("no is odd neg");
            printf("%d",num/a);
        }
    }

}
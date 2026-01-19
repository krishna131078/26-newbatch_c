#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the num");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("a is max");
    }
    else if(b>a)
    {
        printf("b is max");
    }
    else{
        printf("both are same");

    }
}
#include<stdio.h>
void loop1();
int loop4(int n);
int loop2();
void loop1()
{
    int i,n;
    printf("enter the num");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
    }
}

int loop4(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
    }
    return 0;
}
int loop2()
{
    int n,i;
    printf("enter the num");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
    }
    return 0;//mandetory
}
int main()
{
    int n;
    loop1();
    loop2();
    printf("enter the num");
    scanf("%d",&n);
    loop4(n);
    return 0;
}
#include<stdio.h>
void oddeven1();
int oddeven4(int n);
void oddeven1()
{
    int n;
    printf("enter the num");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("no is even");
    }
    else{
        printf("no is odd");
    }
}
int oddeven4(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n,res;
    oddeven1();
    printf("enter the num");
    scanf("%d",&n);
    res=oddeven4(n);
    if(res==1)
    {
        printf("even");
    }
    else{
        printf("odd");
    }
}

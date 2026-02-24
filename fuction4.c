#include<stdio.h>
// 1.woarg wo return
//2.wo arg with return
// 3.with arg wo return
// 4.with arg with return
// 1.woarg wo return
void max();//declare
int max2();

void max3(int n);
int max4(int n);
void max()//define
{
    int n;
    printf("enter the num");
    scanf("%d",&n);
    if(n>0)
    {
        printf("no is pos");
    }
    else{
        printf("no is neg");
    }
}
// 2.wo arg with return
int max2()
{
   int n;
   printf("enter the num") ;
   scanf("%d",&n);
   if(n>0)
   {
    return 1;
   }
   else{
    return 0;
   }
}
// 3 with arg wo return
void max3(int n)
{
    if(n>0)
    {
        printf("no is pos");
    }
    else{
        printf("no is neg");
    }
}
// 4 with arg with return
int max4(int n)
{
    if(n>0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int res,n,res2;
    max();//calling
    res=max2();
    if(res==1)
    {
        printf("no is pos");
    }
    else{
        printf("no is neg");
    }
    printf("enter the num");
    scanf("%d",&n);
    max3(n);
    printf("enter the num");
    scanf("%d",&n);
    res2=max4(n);
    if(res2==1)
    {
        printf("no is pos");
    }
    else{
        printf("no is neg");
    }
    

}

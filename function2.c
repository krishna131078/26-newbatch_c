#include<stdio.h>
void max1();
int max2();
void max3(int a,int b);
int max4(int a,int b);

void max1()//1.wo arg wo return
{
    int a,b;
    printf("enter the num");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("a is max");
    }
    else{
        printf("b is max");
    }
}
int max2()//2.wo arg with return
{
    int a,b;
    printf("enter the num");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }

}
void max3(int a,int b)
{
    if (a>b)
    {
        printf("a is max%d",a);
    }
    else{
        printf("b is max%d",b);
    }

}
int max4(int a,int b)
{
    if (a>b)
    {
        return a;
    }
    else{
       return b;
    }

}

int main()
{
    int a,b;
    max1();
    printf("%d",max2());
    printf("enter the num");
    scanf("%d%d",&a,&b);
    max3(a,b);
    printf("enter the num");
    scanf("%d%d",&a,&b);
    printf("%d",max4(a,b));
}
#include<stdio.h>
// 1. wo arg wo return
void add();//declare---->optional
// 2.wo arg with return 
int add2();
// 3. with arg wo return
void add3(int a,int b);
// 4.with arg with return'
int add4(int a,int b);
void add()//define
{
    int a,b,c;
    printf("enter the num");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}
int add2()//1
{
    int a,b,c;
    printf("enter the num");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;//2
}
void add3(int a,int b)
{
    int c;
    c=a+b;
    printf("%d",c);
}
int add4(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

int main()
{
    int a,b;
    add();//calling
    printf("%d",add2());
    printf("enter the num");
    scanf("%d%d",&a,&b);
    add3(a,b);
    printf("enter the num");
    scanf("%d%d",&a,&b);
    printf("%d",add4(a,b));

}

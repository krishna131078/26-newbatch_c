//1. wo arg wo return
#include<stdio.h>
// void facto1();
// void facto1()
// {
//     int n,fact=1,i;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     printf("%d",fact);
// }


// 2.wo arg with return
// int facto2();
// int facto2()
// {
//     int n,fact=1,i=1;
//    printf("enter the num");
//    scanf("%d",&n);
//    while(i<=n)
//    {
//     fact=fact*i;
//     i++;
//    }
//    return fact;

// }

// 3.with arg wo return

// void facto3(int n);
// void facto3(int n)
// {
//     int fact=1,i=1;
//     while(i<=n)
//     {
//         fact=fact*i;
//         i++;
//     }
//     printf("%d",fact);
// }

int facto4(int n);
int facto4(int n)
{
    int i=1,fact=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    return fact;
}
int main()
{
    // facto1();
    // printf("%d",facto2());   
    int n;
    printf("enter the num");
   scanf("%d",&n);
//    facto3(n);
printf("%d",facto4(n));

}
// do while--->exit connrtol
// 
// do{
// }
// while();
#include<stdio.h>
// int main()
// {
//     ,nint i=1;
//     printf("enter the num");
//     scanf("%d",&n);
//     do{
//         printf("%d",i);
//         i++;
//     }
//     while(i<=n);
// }
int main()
{
    int n,i=1,sum=0;
    printf("nter the num");
    scanf("%d",&n);
    do{
        printf("%d",i);
        sum=sum+i;//0+1=1//1+2=3//3+3=6//6+4=10//10+5=15
        i++;
    }
    while(i<=n);
    printf("\n%d",sum);
}
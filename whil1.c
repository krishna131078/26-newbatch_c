// init
//condition
//incre/decre
#include<stdio.h>
// int main()
// {
//     int i=1,n;
//     printf("enter the num");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         printf("%d",i);
//         i++;
//     }
// }
// int main()
// {
//     int n,i;
//     printf("enter the num");
//     scanf("%d",&n);
//     i=n;
//     while(i>=1)
//     {
//         printf("%d",i);
//         i--;
//     }
// }

// int main()
// {
//     int n,count=0;
//     printf("enter the num");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         n=n/10;//123/10
//         count++;
//     }
//     printf("%d",count);
// }
// 1234---->4321
// 6----1,2,3---->6
// 28---->1,2,4,7,14---->28
int main()
{
    int n,i=1,sum=0;
    printf("enter the num");
    scanf("%d",&n);
    while(i<n)
{
    if(n%i==0)//6%1=//
    {
        sum=sum+i;//0+1=1+2+3=6
    }
    i++;
}
if(sum==n)
{
    printf("perfect");
}
else{
    printf("no is not perfect");
}
}

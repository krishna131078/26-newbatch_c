#include<stdio.h>
// int main()
// {
//     int a[5]={1,2,3};
//     printf("%d",a[0]);
//     printf("\n%d",a[1]);
//     printf("\n%d",a[5]);
// }
// int main()
// {
//     int a[5];
//     printf("enter the array");
//     scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
//     printf("here is ur array");
//     printf("%d\n%d\n%d\n%d\n%d",a[0],a[1],a[2],a[3],a[4]);
// }

// int main()
// {
//     int a[10],i,n;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("\n%d",a[i]);
//     }
// }
int main()
{
    int n,i,sum=0,a[10];
    printf("enter the num");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
        sum=sum+a[i];//0+1=1//1+2=3//3+3=6//6+4=10//10+5=15
    }
    printf("\n%d",sum);


}
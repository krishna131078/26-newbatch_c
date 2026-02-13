#include<stdio.h>
// int main()
// {
//     // int a[3][2]={{1,2},{3,4},{5,6}};
//     int a[3][2];
//     scanf("%d",&a[0][0]);
//     printf("%d\t %d\n",a[0][0],a[0][1]);
//     printf("%d\t %d\n",a[1][0],a[1][1]);
//     printf("%d\t %d\n",a[2][0],a[2][1]);


// for(i=0;i<n;i++)
// {
//     scanf("%d",&a[i]);
// }
// for(i=0;i<n;i++)
// {
//     printf("%d",a[i]);
// }
// }
int main()
{
    int a[3][3],i,n,j;
    printf("enter the num");
    scanf("%d",&n);
    printf("enter matrix elements");
    for(i=0;i<n;i++)//for rows
    {
        for(j=0;j<n;j++)//column
        {
            printf("enter the elemnts a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
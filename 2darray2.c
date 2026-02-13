#include<stdio.h>
// #define SIZE 3
// int main()
// {
//     int a[3][3],i,j,n;
//     printf("enter the num");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("here is ur transpose matrix");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             printf("%d ",a[j][i]);
//         }
//         printf("\n");
//     }

// }
// 1 2 3
// 4 5 6
// 7 8 9
// ={{1,2,3},{4,5,6},{7,8,9}}


// 1 4 7
// 2 5 8
// 3 6 9

// 1 2 3 
// 4 5 6
// 7 8 9

// 1 2 3
// 4 5 6
// 7 8 9

// 2 4 6
// int main()
// {
//     int n,a[3][3],b[3][3],c[3][3],i,j;
//     printf("enter the num");
//     scanf("%d",&n);
//     printf("elements for 1st matrix");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("elements for 2nd matrix");
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             c[i][j]=a[i][j]+b[i][j];//2+3=5
//             printf("%d",c[i][j]);
//         }
//         printf("\n");

//     }

// }
//1 2 3---->6
//4 5 6---->15
//7 8 9----->24
// int main()
// {
//     int n,a[3][3],i,j,sum;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     //row wise
//      for(i=0;i<n;i++)
//     {
//         sum=0;
//         for(j=0;j<n;j++)
//         {
//             printf("%d\t",a[i][j]);
//             sum=sum+a[i][j];
            
//         }
//         printf("=%d\n",sum);
//         printf("\n");
//     }
//     //column wise
//     for(i=0;i<n;i++)
//     {
//         sum=0;
//         for(j=0;j<n;j++)
//         {
//             sum=sum+a[j][i];
//         }
//          printf("%d\t",sum);
       
//     }
    

// }
// 1 2 
// 3 4
// num=2
// 2 4
// 6 8
// int main()
// {
//     int n,a[3][3],i,j,num;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("enter the num");
//     scanf("%d",&num);//2
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             a[i][j]=num*a[i][j];
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }


// }
// 1 0 0
// 0 1 0
// 0 0 1
// int main()
// {
//     int n,a[3][3],i,j;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             if(i==j)
//             {
//                 printf("1");
//             }
//             else{
//                 printf("0");
//             }
//         }
//         printf("\n");
//     }
// }
// 1 2 3
// 0 5 6
// 0 0 9

// int main()
// {
//     int n,a[3][3],i,j;
//      printf("enter the num");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             if(i>j)
//             {
//                 printf("0");

//             }
//             else{
//                 printf("%d",a[i][j]);
//             }
//         }
//         printf("\n");
//     }
// }
//  1 0 0
//  4 5 0
//  7 8 9
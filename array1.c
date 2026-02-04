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
// // }
// int main()
// {
//     int n,i,sum=0,a[10];
//     printf("enter the num");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("\n%d",a[i]);
//         sum=sum+a[i];//0+1=1//1+2=3//3+3=6//6+4=10//10+5=15
//     }
//     printf("\n%d",sum);


// }
// int main()
// {
//     int a[10],n,i;
//     printf("enter the num");
//     scanf("%d",&n);
//     printf("enter the elements");
//     for(i=0;i<=n;i++)
//     {
//         scanf("%d",&a[i]);//1,2,3,4,5
//     }
//     printf("entered elements");
//     for(i=n;i>=0;i--)
//     {
//         printf("\n%d",a[i]);//1,2,3,4,5
//     }
// }


// ooddd---->evennnn
// int main()
// {
//     int n,i,a[10];
//     printf("enter the num");
//     scanf("%d",&n);
//     printf("enter the num");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         if(a[i]%2==0)
//         {
//             printf("even numbers are:%d",a[i]);
//         }
//         else{
//             printf("odd numbers are:%d",a[i]);
//         }
//     }

// }


// int main()
// {
//     int a[10],b[10],i,n;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for(i=0;i<n;i++)
//     {
//         b[i]=a[i];
//         printf(" here is ur copied array:%d",b[i]);
//     }
// }
//1,2,3,4,5///---->5
// int main()
// {
//     int i,n,a[10],max;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     max=a[0];//1
//     for(i=0;i<n;i++)
//     {
//         if(a[i]<max)
//         {
//             max=a[i];//12,45,7,89,23,98
//         }
        
//     }
//     printf("%d",max);


// }
int main()
{
    int i,j,n,a[10],temp;
    printf("enter the num");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)//45,67,56,34,23
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];//temp=67
                a[i]=a[j];//a[i]=56
                a[j]=temp;//a[j]=167
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

// 43,23,54,78,12
// 1.23,43
// 2.23,43,54,78,12
//3.23,43,54,78,12
//4.23,43,54,12,78

// 1.23,43,54,12,78
// 23,43,12,54,78

// 23,12,43,54,78
//12,23,43,54,78

// 1,2,3,4,5---->
// 2---->1


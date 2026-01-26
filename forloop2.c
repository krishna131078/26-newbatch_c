// i=1--->init
// i<=10--->condition
// i++incre/decre   

#include<stdio.h>

// int main()
// {
//     int i,n;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(i=1;i<=n;i+=3)
//     {
//         printf("%d\n",i);//1//2
//     }
// }

// int main()
// {
//     int n,i,n1;
//     printf("enter the num");
//     scanf("%d",&n);
//     printf("enter the num");
//     scanf("%d",&n1);
    
//     for(i=n;i>=n1;i--)
//     {
//         printf("\n%d",i);
//     }
// }
// int main()
// {
//     int n,sum=0,i;
//     printf("enter the numn");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         printf("\n%d",i);
//         sum=sum+i;//0+1=1//1+2=3//3+3=6//6+4=10//10+5=15
//     }
//     printf("\nsum:%d",sum); 
// }
// int main()
// {
//     int n,i,esum=0,osum=0;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         if(i%2==0)
//         {
//             esum=esum+i;//0+2//2+4=6//6+6=12//12+8=20//20+10=30
//         }
//         else{
//             osum=osum+i;//0+1=1//1+3=4//4+5//9//9+7=16//16+9=25
//         }
//     }
//     printf("\nesum%d",esum);
//     printf("\nosum:%d",osum);
// }
// multiplication---->
// 5*1=5
int main()
{
    int i,n;
    printf("enter the num");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("\n%d *%d=%d",n,i,n*i);
    }
}
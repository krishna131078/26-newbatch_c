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
// int main()
// {
//     int i,n;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(i=1;i<=10;i++)
//     {
//         printf("\n%d *%d=%d",n,i,n*i);
//     }
// }
// 5---->5*4*3*2*1=120//
// int main()
// {
//     int n,i,fact=1;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         fact=fact*i;//1*1=1//1*2=2//2*3=6//6*4=24//24*5=120
//     }
//     printf("%d",fact);
// }
//2--->3--->8
// int main()
// {
//     int base,power,i,m=1;
//     printf("enter the base and power");
//     scanf("%d%d",&base,&power);
//     for(i=1;i<=power;i++)
//     {
//         m=m*base;//1*2=2//2*2=4//4*2=8//8*2=16
//     }
//     printf("%d",m);
// }




// 3--->1,3
//5--->1,5
// int main()
// {
//     int n,count=0,i;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             count++;//1//2//
//         }
//     }
//     if(count==2)
//     {
//         printf("no is prime");
//     }
//     else{
//         printf("no is not prime");
//     }
// }
//1234--->
// int main()
// {
//     int n,count=0;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(;n>0;)
//     {
//         n=n/10;//123/10=12//12/10=1/10=0
//         count++;
//     }
//     printf("%d",count);
// }

//1234----->4321
// int main()
// {
//     int n,rem,sum=0;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(;n!=0;)
//     {
//         rem=n%10;//1234%10=4//123%10=3//12%10=2//1%10=1
//         sum=(sum*10)+rem;//0+4=4//40+3=430+2=432//4321/
//         n=n/10;//1234/10=123//123/10=12//12/10=1/10=0....
//     }
//     printf("reverse digit:%d",sum);
// }
// int main()
// {
//     //123--->6
//     int n,sum=0,rem;
//     printf("enter the num");
//     scanf("%d",&n);
//     for(;n>0;)
//     {
//         rem=n%10;//123%10=3//12%10=2//1%10=1
//         sum=sum+rem;//0+3=3+2=5+1=6
//         n=n/10;//123/10=12//12/10=1/10--->0.
//     }
//     printf("%d",sum);
// }

//121
// int main()
// {
//     int n,sum=0,rem,temp;
//     printf("enter the num");
//     scanf("%d",&n);
//     temp=n;//121
//     for(;n>0;)
//     {
//         rem=n%10;//121%10=1//12%10=2//1%10=1
//         sum=(sum*10)+rem;//0+1=1//10+2=12//120+1=121
//         n=n/10;//121/10=12//12/10=1/10
//     }
//     if(temp==sum)
//     {
//         printf("it is palindrome");
//     }
//     else{
//         printf("not palindrome");
//     }
// }

// 153---->1+125+27=153//armstrng num
int main()
{
    int n,rem,sum=0,temp;
    printf("enter the num");
    scanf("%d",&n);
    temp=n;
    for(;n>0;)
    {
        rem=n%10;//153%10=3//15%10=5//1%10=1
        sum=sum+(rem*rem*rem);//0+27=27//27+125=152+1=153
        n=n/10;//153/10=15//15/10=1//0.........
    }
    if(temp==sum)
    {
        printf("no is armstrng");
    }
    else{
        printf("no is not armstrng");
    }
}
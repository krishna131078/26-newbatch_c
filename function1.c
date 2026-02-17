#include<stdio.h>

    // 1.wo arg wo return
    
    // void learning();//declaration
    // void learning()//define
    // {
    //     printf("hello world");
    // }
    // int main()
    // {
    //     learning();//calling
    //     learning();
    // }

// // 1. wo arg wo return
// void add();//declaration
// void add()//define
// {
//     int a,b,c;
//     printf("enter the num");
//     scanf("%d%d",&a,&b);
//     c=a+b;
//     printf("%d",c);
// }
// int main()
// {
//     add();//calling part
// }

// 2. wo arg with return
// int add();//declaration//1
// int add()//define
// {
//     int a,b,c;
//     printf("enter the num");
//     scanf("%d%d",&a,&b);
//     c=a+b;
//     return c;//2
// }
// int main()
// {
//     int res;
//     res=add();
//     printf("%d",res);
//     // printf("%d",add());//calling part//3
// }

// 3.with arg wo return
// void add(int a,int b);//declaration
// void add(int a,int b)//define//1
// {
//     int c;
    
//     c=a+b;
//     printf("%d",c);
// }
// int main()
// {
//     // int a,b;
//     // printf("enter the num");
//     // scanf("%d%d",&a,&b);//2
//     add(10,20);//calling part
// }

// 4 with arg with return
int add(int a,int b);//declaration
int add(int a,int b)//define//1
{
    int c;
    
    c=a+b;
   return c;
}
int main()
{
    int a,b;
    printf("enter the num");
    scanf("%d%d",&a,&b);//2
    printf("%d",add(a,b));//calling part
}
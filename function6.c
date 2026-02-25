// #include<stdio.h>
// void fact();
// int fact4(int n);
// void fact()
// {
//     int i=1,n,facto=1;
//     printf("enter the num");
//     scanf("%d",&n);
//     do{
//         facto=facto*i;
//         i++;

//     }
//     while(i<=n);
//     printf("%d",facto);
// }

// int fact4(int n)
// {
//     int facto=1,i=1;
//     while(i<=n)
//     {
//         facto=facto*i;
//         i++;
//     }
//     return facto;
// }
// int main()
// {
//     int n;
//     fact();
//     printf("enter the num");
//     scanf("%d",&n);
//     printf("%d",fact4(n));
// }
#include<stdio.h>
int fun1(int base,int power);
int fun1(int base,int power)
{
    int m=1,i=1;
    while(i<=power)
    {
        m=m*base;//1*2//2*2=4//4*2=8
        i++;
    }
    return m;

}
int main()
{
    int base,power;
    printf("enter the base and power");
    scanf("%d%d",&base,&power);
    printf("%d",fun1(base,power));
}
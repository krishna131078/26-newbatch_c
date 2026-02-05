// 1,2,3,4,5
// ----->34
//------->2
// 1,2,3,67,4,5

#include<stdio.h>
int main()
{
    int n,i,pos,ele,a[10];
    printf("enter the num");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//1,2,3,4,5
    }
    printf("enter the ele");
    scanf("%d",&ele);//45
    printf("enter the pos");
    scanf("%d",&pos);//3
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];//
    }
    a[pos]=ele;
    n++;
    printf("after insertion elements");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }


}

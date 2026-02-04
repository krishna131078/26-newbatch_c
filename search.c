#include<stdio.h>
int main()
{
    int n,i,element,a[10],found=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elemnt u want to search");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(a[i]==element)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("%d element found at %d pos",element,i);
    }
    else{
        printf("%d element not found at pos",element);
    }
}
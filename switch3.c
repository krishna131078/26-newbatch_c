#include<stdio.h>
int main()
{
    int choice;
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        printf("between 1 to 5");
        break;
        case 6:
        case 7:
        case 8:
        case 9:
        printf("between 6 to 9");
        break;
        default:
        printf("invalid choice");
        break;
    }
}
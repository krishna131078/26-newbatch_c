#include<stdio.h>
int main()
{
    int choice;
    printf("1.for southindian\n2.for punjabi\n3.for gujarati \n4.for exit");
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("south indian");
        break;

        case 2:
        printf("punjabi");
        break;
        case 3:
        printf("gujarati");
        break;
        default:
        printf("invalid choice");
        break;
    }
}
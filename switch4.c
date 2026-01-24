#include<stdio.h>
int main()
{
    int choice,choice2;
    printf("1.for southindian\n 2.for north\n3.for....");
    
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("u choose south indian");
        printf("1.for dosa\n 2.for idli\n3.for....");
        printf("enter the subchoice");
        scanf("%d",&choice2);
        switch(choice2)
        {
            case 1:
            printf("u choose dosa");
            break;
            case 2:
            printf("u choose idli");
            break;

        }
        break;//main switch case1

        case 2:
        printf("north.....")
        



    }
}
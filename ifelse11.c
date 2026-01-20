#include<stdio.h>
int main()
{
    int balance=5000,pin,amount,choice,correctedpin=123;
    printf("-------welcome to my bank----------");
    printf("enter the pin");
    scanf("%d",&pin);
    if(pin==correctedpin)
    { 
        
        printf("1.for balance check") ;
        printf("\n2.for deposite");
        printf("\n3.for withdraw");
        printf("enter ur choice");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("ur balance is %d",balance);
        }
        else if(choice==2)
        {
            printf("enter the amount");
            scanf("%d",&amount);
            if(amount>0)
            {
                balance=balance+amount;
                printf("after deposite ur update balance is%d",balance);
            }
            else{
                printf("invalid deposite amount");
            }
        }
        else if(choice==3)
        {
                printf("enter the amount");
            scanf("%d",&amount);
            if(amount>0)
            {
                balance=balance-amount;
                printf("after withdraw ur update balance is%d",balance);
            }
            else{
                printf("invalid withdraw amount");
            }
        }
        else{
            printf("unsufficient balance");
        }



    }
    else{
        printf("incorrected pin");
    }
}
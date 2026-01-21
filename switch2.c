#include<stdio.h>
int main()
{
    char choice;
    printf("enter the choice");
    scanf("%c",&choice);
    switch(choice)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("u choose vowel");
        break;
        default:
        printf("consonant");
        break;
    }
}
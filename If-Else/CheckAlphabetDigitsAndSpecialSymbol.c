// Write a C program to input any character and check whether it is alphabet, digit or special character.

#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the Character : ");
    scanf("%c",&ch);

    if((ch >= 'a') && (ch <= 'z') || (ch >= 'A') && (ch <= 'Z'))
    {
        printf("Given Character is Alphabet.");
    }
    else if((ch >= '0')&&(ch <= '9'))
    {
        printf("Given Character is Digits.");
    }
    else
    {
        printf("Given Character is Special Character.");
    }

    return 0;
}

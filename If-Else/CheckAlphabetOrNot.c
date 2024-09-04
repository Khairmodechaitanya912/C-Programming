// Write a C program to check whether a character is in the alphabet or not.

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
    else
    {
        printf("Given Character is Not Alphabet.");
    }
    
    return 0;
}
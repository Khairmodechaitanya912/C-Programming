// Write a C program to check whether a character is uppercase or lowercase alphabet.

#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the Character : ");
    scanf("%c",&ch);

    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("Given Character is UpperCase Alphabet.");
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("Given Character is LowerCase Alphabet.");
    }
    else
    {
        printf("Given Character is Not Alphabet.");
    }
}
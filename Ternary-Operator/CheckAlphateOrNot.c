// Write a C program to check whether character is an alphabet or not using a conditional operator.


#include<stdio.h>
int main()
{
    char ch = '\0';

    printf("Enter a Character ");
    scanf("%c",&ch);

    ((ch >='a')&&(ch<='z')) ? printf("Given Character is Alphabet.") : ((ch >= 'A')&&(ch <= 'Z')) ? printf("Given Character is Alphabet.") : printf("Given Character is Not a Alphabet");

    return 0;
}